#include <iostream>
#include <iomanip>
using namespace std;

class Time {
private:
    int hour;
    int minute;
    int second;
    
    // Helper function to validate time values
    bool isValidTime(int h, int m, int s) const {
        return (h >= 1 && h <= 23) && (m >= 1 && m <= 59) && (s >= 1 && s <= 59);
    }

public:
    // Default constructor
    Time() {
        hour = 1;
        minute = 1;
        second = 1;
    }
    
    // Parameterized constructor with validation
    Time(int h, int m, int s) {
        setTime(h, m, s);
    }
    
    // Copy constructor
    Time(const Time& other) {
        hour = other.hour;
        minute = other.minute;
        second = other.second;
    }
    
    // Assignment operator
    Time& operator=(const Time& other) {
        if (this != &other) {
            hour = other.hour;
            minute = other.minute;
            second = other.second;
        }
        return *this;
    }
    
    // Setters with proper validation
    void setHour(int h) {
        if (h >= 1 && h <= 23) {
            hour = h;
        } else {
            cout << "Invalid hour (" << h << "). Must be between 1-23. Setting to 1." << endl;
            hour = 1;
        }
    }
    
    void setMinute(int m) {
        if (m >= 1 && m <= 59) {
            minute = m;
        } else {
            cout << "Invalid minute (" << m << "). Must be between 1-59. Setting to 1." << endl;
            minute = 1;
        }
    }
    
    void setSecond(int s) {
        if (s >= 1 && s <= 59) {
            second = s;
        } else {
            cout << "Invalid second (" << s << "). Must be between 1-59. Setting to 1." << endl;
            second = 1;
        }
    }
    
    void setTime(int h, int m, int s) {
        setHour(h);
        setMinute(m);
        setSecond(s);
    }
    
    // Getters with const correctness
    int getHour() const {
        return hour;
    }
    
    int getMinute() const {
        return minute;
    }
    
    int getSecond() const {
        return second;
    }
    
    // Print functions with proper formatting
    void printTwentyFourHourFormat() const {
        cout << setfill('0') << setw(2) << hour << ":"
             << setw(2) << minute << ":"
             << setw(2) << second << endl;
    }
    
    void printTwelveHourFormat() const {
        int displayHour = hour;
        string period = "AM";
        
        if (hour == 12) {
            period = "PM";
        } else if (hour > 12) {
            displayHour = hour - 12;
            period = "PM";
        }
        
        cout << setfill('0') << setw(2) << displayHour << ":"
             << setw(2) << minute << ":"
             << setw(2) << second << " " << period << endl;
    }
    
    // Increment functions with proper validation and overflow handling
    void incSec(int increment = 1) {
        if (increment < 0) {
            cout << "Warning: Negative increment not supported for seconds." << endl;
            return;
        }
        
        second += increment;
        while (second > 59) {
            second -= 60;
            incMin(1);
        }
    }
    
    void incMin(int increment = 1) {
        if (increment < 0) {
            cout << "Warning: Negative increment not supported for minutes." << endl;
            return;
        }
        
        minute += increment;
        while (minute > 59) {
            minute -= 60;
            incHour(1);
        }
    }
    
    void incHour(int increment = 1) {
        if (increment < 0) {
            cout << "Warning: Negative increment not supported for hours." << endl;
            return;
        }
        
        hour += increment;
        while (hour > 23) {
            hour -= 24;
        }
        
        // Ensure hour stays within valid range
        if (hour < 1) {
            hour = 1;
        }
    }
    
    // Utility functions
    bool isValid() const {
        return isValidTime(hour, minute, second);
    }
    
    // Comparison operators
    bool operator==(const Time& other) const {
        return hour == other.hour && minute == other.minute && second == other.second;
    }
    
    bool operator!=(const Time& other) const {
        return !(*this == other);
    }
};

int main() {
    // Test default constructor
    Time t1;
    cout << "Default time (24-hour): ";
    t1.printTwentyFourHourFormat();
    cout << "Default time (12-hour): ";
    t1.printTwelveHourFormat();
    cout << "Is valid: " << (t1.isValid() ? "Yes" : "No") << endl;
    
    // Test parameterized constructor
    Time t2(14, 30, 45);
    cout << "\nParameterized time (24-hour): ";
    t2.printTwentyFourHourFormat();
    cout << "Parameterized time (12-hour): ";
    t2.printTwelveHourFormat();
    
    // Test setters with valid values
    t1.setTime(9, 15, 30);
    cout << "\nAfter setting time to 9:15:30: ";
    t1.printTwelveHourFormat();
    
    // Test setters with invalid values
    cout << "\nTesting invalid values:" << endl;
    t1.setHour(25);  // Invalid hour
    t1.setMinute(65); // Invalid minute
    t1.setSecond(70); // Invalid second
    
    // Test increment functions
    t1.setTime(23, 58, 55);
    cout << "\nSet time to 23:58:55" << endl;
    cout << "Before increment: ";
    t1.printTwentyFourHourFormat();
    
    t1.incSec(10);
    cout << "After incrementing seconds by 10: ";
    t1.printTwentyFourHourFormat();
    
    t1.incMin(65);
    cout << "After incrementing minutes by 65: ";
    t1.printTwentyFourHourFormat();
    
    t1.incHour(5);
    cout << "After incrementing hours by 5: ";
    t1.printTwentyFourHourFormat();
    
    // Test copy constructor and assignment
    Time t3 = t2;
    cout << "\nCopy constructor test: ";
    t3.printTwentyFourHourFormat();
    
    Time t4;
    t4 = t2;
    cout << "Assignment operator test: ";
    t4.printTwentyFourHourFormat();
    
    // Test comparison
    cout << "t2 == t3: " << (t2 == t3 ? "Yes" : "No") << endl;
    cout << "t1 == t2: " << (t1 == t2 ? "Yes" : "No") << endl;
    
    return 0;
}