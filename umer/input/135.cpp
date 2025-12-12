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
    Distance& operator++();
    Distance& operator--();
    Distance& operator=(const Distance& other);
    Distance operator-() const;
    
    void display() const;
};

Distance::Distance(int f, int i) : feet(f), inches(i) {}

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
    feet = f;
}

void Distance::setInches(int i)
{
    inches = i;
}

Distance& Distance::operator++()
{
    feet++;
    inches++;
    return *this;
}

Distance& Distance::operator--()
{
    feet--;
    inches--;
    return *this;
}

Distance& Distance::operator=(const Distance& other)
{
    feet = other.feet;
    inches = other.inches;
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
    
    // Semantic error - using assignment operator instead of increment
    d1 = ++d1;
    cout << "After d1 = ++d1: ";
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
    
    return 0;
}