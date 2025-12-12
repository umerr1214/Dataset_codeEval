#include <iostream>
using namespace std;

class Box 
{
private:
    double length;
    double breath;
    double height;

public:
    double getVolume();
    void setLength(double length);
    void setBreath(double breath);
    void setHeight(double height);
    
    // Operator overloading function
    Box operator+(const Box& other);
};

double Box::getVolume()
{
    return length * breath * height;
}

void Box::setLength(double length)
{
    this->length = length;
}

void Box::setBreath(double breath)
{
    this->breath = breath;
}

void Box::setHeight(double height)
{
    this->height = height;
}

Box Box::operator+(const Box& other)
{
    Box result;
    result.length = this->length + other.length;
    result.breath = this->breath + other.breath;
    result.height = this->height + other.height;
    return result;
}

int main()
{
    Box box1, box2, box3;
    
    // Robustness issue - no validation for negative values
    box1.setLength(-10.0);
    box1.setBreath(-5.0);
    box1.setHeight(-3.0);
    
    box2.setLength(8.0);
    box2.setBreath(4.0);
    box2.setHeight(2.0);
    
    box3 = box1 + box2;
    
    cout << "Box3 Volume: " << box3.getVolume() << endl;
    
    return 0;
}