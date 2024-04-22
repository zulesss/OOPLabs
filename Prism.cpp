#include "Prism.h"
#include <iostream>

using namespace std;

char& Prism::operator[](int index)
{
    if(index < 0 || index > sides.size())
    {
        cout << "index is out of range\n";
        return sides[0];
    }
    return sides[index];
}

double Prism::operator()()
{
    return volume();
}