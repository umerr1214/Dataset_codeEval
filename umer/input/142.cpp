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
    
    // Friend functions for stream operators
    friend istream &operator>>( istream &input, Distance &D );
    friend ostream &operator<<( ostream &output, const Distance &D );
    
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
    if (this != &other) {
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

// Robustness issue - no input validation or error handling
istream &operator>>( istream &input, Distance &D )
{
    cout << "Enter feet: ";
    input >> D.feet;
    cout << "Enter inches: ";
    input >> D.inches;
    return input;
}

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
    
    cout << "Distance 1: " << d1 << endl;
    cout << "Distance 2: " << d2 << endl;
    
    ++d1;
    cout << "After ++d1: " << d1 << endl;
    
    Distance d3 = -d2;
    cout << "d3 = -d2: " << d3 << endl;
    
    return 0;
}