import google.genai as genai
import json
import time

client = genai.Client(api_key="AIzaSyCQEcDsiQqXMOqMUrgXfwB4gCkMFHd772w")

OUTPUT_FILE = "questions.json"


def generate_batch():
    prompt = """You are generating a dataset of programming questions.

TASK:
Generate 25 UNIQUE C++ Object-Oriented Programming (OOP) questions.

CONSTRAINTS:
- Focus ONLY on basic to intermediate OOP concepts
- Avoid advanced topics (no templates, STL-heavy design, or system design)
- Cover a wide variety of topics
- DO NOT repeat or rephrase similar problems
- Each question must be clearly different in logic and objective

TOPICS TO COVER (diversely):
- Classes and Objects
- Constructors / Destructors
- Encapsulation
- Inheritance
- Polymorphism (basic)
- Function Overloading
- Operator Overloading (basic)
- Access Specifiers
- Simple Class Relationships

DIFFICULTY:
- Mix of easy and intermediate
- No trivial or one-line questions

OUTPUT FORMAT (STRICT JSON):
[
  {
    "question": "string",
    "difficulty": "easy | medium",
    "topic": "one_word_topic"
  }
]

IMPORTANT:
- Output ONLY valid JSON
- No explanations
- No markdown
- No extra text
- Ensure all 25 questions are unique"""

    response = client.models.generate_content(
        model='models/gemini-2.5-flash',
        contents=[{'parts': [{'text': prompt}]}]
    )

    text = response.candidates[0].content.parts[0].text.strip()

    try:
        data = json.loads(text)
        return data
    except Exception as e:
        print("Parsing error:", e)
        return []


def load_existing():
    try:
        with open(OUTPUT_FILE, "r") as f:
            return json.load(f)
    except:
        return []


def save_all(data):
    with open(OUTPUT_FILE, "w") as f:
        json.dump(data, f, indent=2)


def normalize(q):
    return q.lower().strip()


def deduplicate(existing, new):
    seen = set(normalize(q["question"]) for q in existing)
    unique = []

    for q in new:
        if normalize(q["question"]) not in seen:
            unique.append(q)
            seen.add(normalize(q["question"]))

    return unique


def main():
    all_questions = load_existing()

    for i in range(20):  # 20 batches × 25 = 500
        print(f"Generating batch {i+1}...")

        batch = generate_batch()

        batch = deduplicate(all_questions, batch)

        # assign IDs
        for q in batch:
            q["id"] = len(all_questions) + 1
            all_questions.append(q)

        save_all(all_questions)

        print(f"Total questions: {len(all_questions)}")

        time.sleep(2)  # avoid rate limits


if __name__ == "__main__":
    main()