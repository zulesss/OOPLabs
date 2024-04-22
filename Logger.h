#pragma once
#include "Sphere.h"
#include <string>
using namespace std;
class Logger
{
public:
    string log; 

public:
    void addRecord(Sphere& sphere);
    void saveLog();
};
