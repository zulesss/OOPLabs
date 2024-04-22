#include "Time.h"
#include <iostream>

using namespace std;

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
