#pragma once

#include "Triad.h"
#include <fstream>
class Vector3D: public Triad
{
public:
    Vector3D(int _x, int _y, int _z) : Triad(_x, _y, _z) {}

    Vector3D operator+(const Vector3D& vec2) const;
    friend std::ostream& operator<<(std::ostream& out, Vector3D& vector);
    int operator*(const Vector3D& vec2) const;
    
};
