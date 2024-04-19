#pragma once

class Time
{
private:
    int hours;
    int minutes;
    int seconds;

public:
    Time();
    Time(int h, int m, int s) ;
    Time(const Time &src);
    ~Time();
    void setHours(int h);
    void setMinutes(int m);
    void setSeconds(int s);
    int getHours();
    int getMinutes();
    int getSeconds();
    void showTime();
};