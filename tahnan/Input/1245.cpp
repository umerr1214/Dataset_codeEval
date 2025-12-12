#include <iostream>
using namespace std;

class Temperature {
private:
    float celsius;
public:
    Temperature(float c) 
    {
        celsius = c;
    }

    bool operator>(Temperature t) 
    {
        return celsius > t.celsius;
    }

    bool operator<(Temperature t) 
    {
        return celsius < t.celsius;
    }
};

// SEMANTIC ERROR: wrong inheritance, Temperature is derived from string
class MyTemp : public string {};

int main() 
{
    Temperature t1(37), t2(39);
    if (t1 > t2) 
    {
        cout << "t1 hotter" << endl;
    } 
    else 
    {
        cout << "t2 hotter" << endl;
    }
    return 0;
}
