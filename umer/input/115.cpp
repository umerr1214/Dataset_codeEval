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
    hour = h;
    minute = m;
    second = s;
}

Time &Time::setTime(int h, int m, int s)
{
    hour = h;
    minute = m;
    second = s;
    return *this;
}

Time &Time::setHour(int h)
{
    hour = h;
    return *this;
}

Time &Time::setMinute(int m)
{
    minute = m;
    return *this;
}

Time &Time::setSecond(int s)
{
    second = s;
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
    cout << hour << ":" << minute << ":" << second << endl;
}

int main()
{
   Time t;

   // Missing semicolon - syntax error
   t.setHour(12).setMinute(34).setSecond(56)

   t.printUniversal();
   return 0;
}