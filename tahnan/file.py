import os

# Folder where you want to create files
folder = "/Users/tahnanamir/Desktop/Dataset/Input"

# Make sure the folder exists
os.makedirs(folder, exist_ok=True)

# Create 100 files
for i in range(1, 106):
    file_path = os.path.join(folder, f"{1630+i}.cpp")
    with open(file_path, "w") as f:
        f.write(f"This is file number {i}\n")

print("Files created successfully!")
