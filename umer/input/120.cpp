#include <iostream>
using namespace std;

class Time 
{
public:
   Time( int = 0, int = 0, int = 0 );

   Time &setTime( int, int, int );
   Time &setHour( int );
   Time &setMinute( int );
   Time &setSecond( int );

   int getHour() const;
   int getMinute() const;
   int getSecond() const;

   void printUniversal() const;
private:
   int hour;
   int minute;
   int second;
};

Time::Time(int h, int m, int s)
{
    hour = (h >= 0 && h < 24) ? h : 0;
    minute = (m >= 0 && m < 60) ? m : 0;
    second = (s >= 0 && s < 60) ? s : 0;
}

Time &Time::setTime(int h, int m, int s)
{
    hour = (h >= 0 && h < 24) ? h : 0;
    minute = (m >= 0 && m < 60) ? m : 0;
    second = (s >= 0 && s < 60) ? s : 0;
    return *this;
}

Time &Time::setHour(int h)
{
    hour = (h >= 0 && h < 24) ? h : 0;
    return *this;
}

Time &Time::setMinute(int m)
{
    minute = (m >= 0 && m < 60) ? m : 0;
    return *this;
}

Time &Time::setSecond(int s)
{
    second = (s >= 0 && s < 60) ? s : 0;
    return *this;
}

int Time::getHour() const
{
    return hour;
}

int Time::getMinute() const
{
    return minute;
}

int Time::getSecond() const
{
    return second;
}

void Time::printUniversal() const
{
    cout << (hour < 10 ? "0" : "") << hour << ":"
         << (minute < 10 ? "0" : "") << minute << ":"
         << (second < 10 ? "0" : "") << second << endl;
}

int main()
{
   Time t;

   // Correct implementation using cascading technique
   t.setHour(12).setMinute(34).setSecond(56);

   t.printUniversal();
   return 0;
}