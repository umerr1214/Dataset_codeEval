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

int main() 
{
    Temperature t1(37);
    Temperature t2(37);
    if(t1 > t2) 
    {
        cout << "t1 hotter\n";
    } 
    else if(t1 < t2) 
    {
        cout << "t2 hotter\n";
    } 
    else 
    {
        cout << "Same temperature\n"; // robustness issue: equality not overloaded
    }
    return 0;
}
