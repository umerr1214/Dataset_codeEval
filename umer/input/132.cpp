#include <iostream>
using namespace std;

class Box 
{
private:
    double length;
    double breath;
    double height;

public:
    // Constructor
    Box(double l = 0.0, double b = 0.0, double h = 0.0) : length(l), breath(b), height(h) {}
    
    double getVolume() const;
    void setLength(double length);
    void setBreath(double breath);
    void setHeight(double height);
    
    // Operator overloading function
    Box operator+(const Box& other) const;
};

double Box::getVolume() const
{
    return length * breath * height;
}

void Box::setLength(double length)
{
    this->length = (length >= 0) ? length : 0;
}

void Box::setBreath(double breath)
{
    this->breath = (breath >= 0) ? breath : 0;
}

void Box::setHeight(double height)
{
    this->height = (height >= 0) ? height : 0;
}

Box Box::operator+(const Box& other) const
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
    
    box1.setLength(10.0);
    box1.setBreath(5.0);
    box1.setHeight(3.0);
    
    box2.setLength(8.0);
    box2.setBreath(4.0);
    box2.setHeight(2.0);
    
    box3 = box1 + box2;
    
    cout << "Box1 Volume: " << box1.getVolume() << endl;
    cout << "Box2 Volume: " << box2.getVolume() << endl;
    cout << "Box3 Volume: " << box3.getVolume() << endl;
    
    return 0;
}