#include "Vector3D.h"
#include <iostream>

using namespace std;

int main()
{
    Vector3D v1(1, 2, 3), v2(5, 3,3);
    Vector3D sum = v1 + v2;
    cout << "Vector1 + Vector2 = " << sum;
    int product = v1 * v2;
    cout << "Scalar product: " << product;
}