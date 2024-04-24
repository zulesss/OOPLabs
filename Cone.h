#pragma once
#include "Solid.h"

class Cone: Solid
{
    float radius, length;
    const float PI = 3.1416;
public:
    Cone(float r, float l):radius(r), length(l){}
    void area() override;
};
