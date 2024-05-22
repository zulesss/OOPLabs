#include "Vector.h"
#include "Error.h"
#include <iostream>
using namespace std;
int main()
{
    try
    {
        Vector<int> x(2);
        cout<<x();
        ++x;
        cout<<x();
        cout<<x++();
        cout<< x[7];
    }
    catch(error &e)
    {
        e.what();
    }
    return 0;
}