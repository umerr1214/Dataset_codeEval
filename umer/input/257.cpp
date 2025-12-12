#include <iostream>
using namespace std;

int main() {
    int speed;
    bool isBirthday;
    
    cout << "Enter your speed: ";
    cin >> speed;
    cout << "Is it your birthday? (1 for yes, 0 for no): ";
    cin >> isBirthday;
    
    int result;
    
    // Adjust speed if it's birthday - poor readability and efficiency
    if(isBirthday){speed-=5;}if(speed<=60){result=0;}else if(speed>=61&&speed<=80){result=1;}else{result=2;}
    
    cout<<"Result: "<<result<<endl;
    
    return 0;
}