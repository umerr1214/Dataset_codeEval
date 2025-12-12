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
    
    // Setters - lack proper validation (robustness issue)
    void setHour(int h) {
        hour = h;  // No validation for range 1-23
    }
    
    void setMinute(int m) {
        minute = m;  // No validation for range 1-59
    }
    
    void setSecond(int s) {
        second = s;  // No validation for range 1-59
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
    
    // Print functions - lack validation (robustness issue)
    void printTwentyFourHourFormat() {
        cout << (hour < 10 ? "0" : "") << hour << ":"
             << (minute < 10 ? "0" : "") << minute << ":"
             << (second < 10 ? "0" : "") << second << endl;
    }
    
    void printTwelveHourFormat() {
        int displayHour = hour;
        string period = "AM";
        
        if (hour == 12) {
            period = "PM";
        } else if (hour > 12) {
            displayHour = hour - 12;
            period = "PM";
        }
        
        // No validation for negative or invalid values
        cout << (displayHour < 10 ? "0" : "") << displayHour << ":"
             << (minute < 10 ? "0" : "") << minute << ":"
             << (second < 10 ? "0" : "") << second << " " << period << endl;
    }
    
    // Increment functions - lack validation (robustness issue)
    void incSec(int increment = 1) {
        second += increment;  // No validation for negative increment
        while (second > 59) {
            second -= 60;
            incMin(1);
        }
        // No handling for negative seconds
    }
    
    void incMin(int increment = 1) {
        minute += increment;  // No validation for negative increment
        while (minute > 59) {
            minute -= 60;
            incHour(1);
        }
        // No handling for negative minutes
    }
    
    void incHour(int increment = 1) {
        hour += increment;  // No validation for negative increment
        while (hour > 23) {
            hour -= 24;
        }
        // No proper handling for values less than 1
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