#pragma once

class Triad
{
protected:
    int x, y, z;
public:
    Triad(int _x = 0, int _y = 0, int _z = 0) : x(_x), y(_y), z(_z) {}

    bool operator==(const Triad& other) const;
    void addNumber(int num);
    void multiplyByNumber(int num);
};
