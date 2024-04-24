#include "Triad.h"

bool Triad::operator== (const Triad& other) const
{
    return x == other.x && y == other.y && z == other.z;
}

void Triad::addNumber(int num)
{
    x += num;
    y += num;
    z += num;
}

void Triad::multiplyByNumber(int num)
{
    x *= num;
    y *= num;
    z *= num;
}
