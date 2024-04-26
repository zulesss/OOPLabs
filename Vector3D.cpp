#include "Vector3D.h"

Vector3D Vector3D::operator+(const Vector3D& vec2) const
{
    return Vector3D(x + vec2.x, y + vec2.y, z + vec2.z);
}

int Vector3D::operator*(const Vector3D& vec2) const
{
    return x * vec2.x + y * vec2.y + z * vec2.z;
}

std::ostream& operator<<(std::ostream& out, Vector3D& vector)
{
    out << "(" << vector.x << ", " << vector.y << ", " << vector.z << ")";
    return out;
}

// git stash