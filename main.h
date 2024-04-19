#include <vector>
#include <iostream>
using namespace std;

class Prism
{
private:
    double length;
    double width;
    double height;
    vector<char> sides;
    double volume(){return length * width * height;}

public:
    Prism(double l = 0, double w = 0, double h = 0): length(l), width(w), height(h){}
    ~Prism(){}

    void addSide(char side){sides.push_back(side);}

    //overloading
    char& operator[](int index);
    double operator()();
    friend ostream& operator<<(ostream& out, const Prism&p);
    friend istream& operator>>(istream& in, Prism&p);
};