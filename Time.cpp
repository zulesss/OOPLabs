#include "Time.h"
#include <iostream>

using namespace std;

Time::Time(const Time& src)
{
    hours = src.hours;
    minutes = src.minutes;
    seconds = src.seconds;
    cout << "Copying constructor \n";
}

Time::~Time()
{
    cout << "Destructor. \n";
}

Time::Time() : hours(0), minutes(0), seconds(0)
{
    cout<<"Default constructor \n";
}

Time::Time(int h, int m, int s) : hours(h), minutes(m), seconds(s)
{
    cout<<"Initializer list constructor. \n";
}

void Time::setHours(int h)
{
    hours = h;
}
void Time::setMinutes(int m)
{
    minutes = m;
}
void Time::setSeconds(int s)
{
    seconds = s;
}
int Time::getHours()
{
    return hours;
}
int Time::getMinutes()
{
    return minutes;
}
int Time::getSeconds()
{
    return seconds;
}
void Time::showTime()
{
    cout << hours << "hours, " << minutes << "minutes, " << seconds <<  "seconds. \n";
}
