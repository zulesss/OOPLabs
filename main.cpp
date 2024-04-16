#include "main.h"
#include <iostream>

using namespace std;

Time::Time(const Time& src)
{
    hours = src.hours;
    minutes = src.minutes;
    seconds = src.seconds;
    cout<<"Copying constructor \n";
}

Time::~Time()
{
    cout<<"Destructor. \n";
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

int main()
{
    Time time1;
    time1.showTime();
    Time time2(5, 52, 52);
    time2.showTime();
    Time time3(time2);
    time3.showTime();
    Time timeManager[3] = {Time(1, 11, 11), Time(2, 22, 22), Time(3, 33, 33)};
    for(int i = 0; i<3; i++)
    {
        timeManager[i].showTime();
    }
}