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
    if (feet > 0) feet--;
    if (inches > 0) inches--;
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

// Poor readability - no prompts and confusing variable names
istream &operator>>( istream &input, Distance &D )
{
    input >> D.feet >> D.inches;
    return input;
}

// Poor style - inconsistent formatting and unnecessary complexity
ostream &operator<<( ostream &output, const Distance &D )
{
    output<<D.feet<<" feet "<<D.inches<<" inches";
    return output;
}

int main()
{
    Distance d1, d2;
    
    // Poor readability - no clear instructions for user
    cin >> d1 >> d2;
    
    cout << d1 << endl << d2 << endl;
    
    ++d1;
    cout << d1 << endl;
    
    Distance d3 = -d2;
    cout << d3 << endl;
    
    return 0;
}