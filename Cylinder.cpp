#include "Cylinder.h"
#include <iostream>

using namespace std;

void Cylinder::area()
{
    cout << "Cylinder area: " << 2*PI*radius*(radius+height);
}
