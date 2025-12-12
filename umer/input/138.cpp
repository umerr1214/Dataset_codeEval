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

int main()
{
    Distance d1(5, 8);
    Distance d2;
    
    cout << "Original d1: ";
    d1.display();
    
    ++d1;
    cout << "After ++d1: ";
    d1.display();
    
    --d1;
    cout << "After --d1: ";
    d1.display();
    
    d2 = d1;
    cout << "d2 = d1: ";
    d2.display();
    
    Distance d3 = -d1;
    cout << "d3 = -d1: ";
    d3.display();
    
    // Test edge cases
    Distance d4(0, 0);
    cout << "d4 before decrement: ";
    d4.display();
    --d4;
    cout << "d4 after decrement: ";
    d4.display();
    
    return 0;
}