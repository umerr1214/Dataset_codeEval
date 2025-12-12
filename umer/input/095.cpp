#include <iostream>
using namespace std;

class Time {
private:
    int hour;
    int minute;
    int second;

public:
    // Default constructor
    Time() {
        hour = 1;
        minute = 1;
        second = 1;
    }
    
    // Parameterized constructor
    Time(int h, int m, int s) {
        setTime(h, m, s);
    }
    
    // Setters with validation
    void setHour(int h) {
        if (h >= 1 && h <= 23) {
            hour = h;
        } else {
            cout << "Invalid hour. Setting to 1." << endl;
            hour = 1;
        }
    }
    
    void setMinute(int m) {
        if (m >= 1 && m <= 59) {
            minute = m;
        } else {
            cout << "Invalid minute. Setting to 1." << endl;
            minute = 1;
        }
    }
    
    void setSecond(int s) {
        if (s >= 1 && s <= 59) {
            second = s;
        } else {
            cout << "Invalid second. Setting to 1." << endl;
            second = 1;
        }
    }
    
    void setTime(int h, int m, int s) {
        setHour(h);
        setMinute(m);
        setSecond(s);
    }
    
    // Getters
    int getHour() {
        return hour;
    }
    
    int getMinute() {
        return minute;
    }
    
    int getSecond() {
        return second;
    }
    
    // Print functions - poor readability (readability/efficiency issue)
    void printTwentyFourHourFormat() {
        // Inefficient: multiple function calls instead of direct access
        cout << (getHour() < 10 ? "0" : "") << getHour() << ":"
             << (getMinute() < 10 ? "0" : "") << getMinute() << ":"
             << (getSecond() < 10 ? "0" : "") << getSecond() << endl;
    }
    
    void printTwelveHourFormat() {
        // Poor readability: complex nested conditions
        int displayHour = getHour();
        string period = "AM";
        
        if (getHour() == 12) {
            period = "PM";
        } else if (getHour() > 12) {
            displayHour = getHour() - 12;
            period = "PM";
        }
        
        // Inefficient: repeated function calls
        cout << (displayHour < 10 ? "0" : "") << displayHour << ":"
             << (getMinute() < 10 ? "0" : "") << getMinute() << ":"
             << (getSecond() < 10 ? "0" : "") << getSecond() << " " << period << endl;
    }
    
    // Increment functions - poor readability (readability/efficiency issue)
    void incSec(int increment = 1) {
        // Poor style: variable declaration in middle
        int temp = second;
        temp += increment;
        second = temp;
        
        // Inefficient: using while loop instead of modular arithmetic
        while (second > 59) {
            second -= 60;
            incMin(1);
        }
    }
    
    void incMin(int increment = 1) {
        // Poor readability: unnecessary temporary variable
        int temp = minute;
        temp += increment;
        minute = temp;
        
        while (minute > 59) {
            minute -= 60;
            incHour(1);
        }
    }
    
    void incHour(int increment = 1) {
        // Poor readability: unnecessary temporary variable
        int temp = hour;
        temp += increment;
        hour = temp;
        
        while (hour > 23) {
            hour -= 24;
        }
        if (hour < 1) {
            hour = 1;
        }
    }
};

int main() {
    // Test default constructor
    Time t1;
    cout << "Default time: ";
    t1.printTwentyFourHourFormat();
    
    // Test parameterized constructor
    Time t2(14, 30, 45);
    cout << "Parameterized time (24-hour): ";
    t2.printTwentyFourHourFormat();
    cout << "Parameterized time (12-hour): ";
    t2.printTwelveHourFormat();
    
    // Test setters
    t1.setTime(9, 15, 30);
    cout << "After setting time: ";
    t1.printTwelveHourFormat();
    
    // Test increment functions
    t1.incSec(35);
    cout << "After incrementing seconds by 35: ";
    t1.printTwentyFourHourFormat();
    
    t1.incMin(50);
    cout << "After incrementing minutes by 50: ";
    t1.printTwentyFourHourFormat();
    
    t1.incHour(5);
    cout << "After incrementing hours by 5: ";
    t1.printTwentyFourHourFormat();
    
    return 0;
}