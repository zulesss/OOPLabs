#pragma once
#include "Solid.h"

class Cylinder : Solid
{
    float radius, height;
    const float PI = 3.1416;
    
public:
    Cylinder(float r, float h): radius(r), height(h) {}
    void area() override;
};
