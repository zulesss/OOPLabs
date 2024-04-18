#include "main.h"
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

ostream& operator<<(ostream& out, const Prism& p)
{
    out << "Prism:"
    << "\nLenght = " << p.length
    << "\nWidth = " << p.width
    << "\nHeight = " << p.height << endl;
    return out;
}

istream& operator>>(istream& in, Prism& p)
{
    in >> p.length >> p.width >> p.height;
    return in;
}
int main()
{
    Prism prism1;
    cin >> prism1;
    cout << prism1;
    cout << prism1() << endl;
    prism1.addSide('A');
    prism1.addSide('B');
    prism1.addSide('C');
    prism1.addSide('D');
    prism1.addSide('E');
    prism1.addSide('F');
    cout << prism1[5] << endl;
    cout << prism1[12] << endl;
}