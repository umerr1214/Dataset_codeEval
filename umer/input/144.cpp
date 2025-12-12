#include <iostream>
using namespace std;

class Distance 
{
private:
    int feet;
    int inches;

public:
    Distance(int f = 0, int i = 0);
    
    // Getters
    int getFeet() const;
    int getInches() const;
    
    // Setters
    void setFeet(int f);
    void setInches(int i);
    
    // Operator overloading
    Distance& operator++();    // Prefix increment
    Distance& operator--();    // Prefix decrement
    Distance& operator=(const Distance& other);
    Distance operator-() const; // Unary minus
    
    // Friend functions for stream operators
    friend istream &operator>>( istream &input, Distance &D );
    friend ostream &operator<<( ostream &output, const Distance &D );
    
    void display() const;
};

Distance::Distance(int f, int i) : feet(f >= 0 ? f : 0), inches(i >= 0 ? i : 0) {}

int Distance::getFeet() const
{
    return feet;
}

int Distance::getInches() const
{
    return inches;
}

void Distance::setFeet(int f)
{
    feet = (f >= 0) ? f : 0;
}

void Distance::setInches(int i)
{
    inches = (i >= 0) ? i : 0;
}

Distance& Distance::operator++()
{
    feet++;
    inches++;
    return *this;
}

Distance& Distance::operator--()
{
    // Prevent negative values
    if (feet > 0) feet--;
    if (inches > 0) inches--;
    return *this;
}

Distance& Distance::operator=(const Distance& other)
{
    if (this != &other) {  // Self-assignment check
        feet = other.feet;
        inches = other.inches;
    }
    return *this;
}

Distance Distance::operator-() const
{
    return Distance(-feet, -inches);
}

void Distance::display() const
{
    cout << feet << " feet " << inches << " inches" << endl;
}

// Friend function for input with validation
istream &operator>>( istream &input, Distance &D )
{
    cout << "Enter feet: ";
    input >> D.feet;
    
    // Input validation
    if (input.fail() || D.feet < 0) {
        input.clear();
        input.ignore(1000, '\n');
        D.feet = 0;
    }
    
    cout << "Enter inches: ";
    input >> D.inches;
    
    // Input validation
    if (input.fail() || D.inches < 0) {
        input.clear();
        input.ignore(1000, '\n');
        D.inches = 0;
    }
    
    return input;
}

// Friend function for output with proper formatting
ostream &operator<<( ostream &output, const Distance &D )
{
    output << D.feet << " feet " << D.inches << " inches";
    return output;
}

int main()
{
    Distance d1, d2;
    
    cout << "Enter distance 1:" << endl;
    cin >> d1;
    
    cout << "Enter distance 2:" << endl;
    cin >> d2;
    
    cout << "\nDistance 1: " << d1 << endl;
    cout << "Distance 2: " << d2 << endl;
    
    ++d1;
    cout << "After ++d1: " << d1 << endl;
    
    --d2;
    cout << "After --d2: " << d2 << endl;
    
    Distance d3 = -d1;
    cout << "d3 = -d1: " << d3 << endl;
    
    // Test assignment operator
    Distance d4;
    d4 = d2;
    cout << "d4 = d2: " << d4 << endl;
    
    return 0;
}