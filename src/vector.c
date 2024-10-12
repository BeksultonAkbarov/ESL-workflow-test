#include <stdio.h>
#include "vector.h"

Vector3D add(Vector3D a, Vector3D b) {
    Vector3D result = {a.x + b.x, a.y + b.y, a.z + b.z};
    return result;
}

Vector3D sub(Vector3D a, Vector3D b) {
    Vector3D result = {a.x - b.x, a.y - b.y, a.z - b.z};
    return result;
}

float dot(Vector3D a, Vector3D b) {
    return a.x * b.x + a.y * b.y + a.z * b.z;
}

Vector3D cross(Vector3D a, Vector3D b) {
    Vector3D result = {
        a.y * b.z - a.z * b.y,
        a.z * b.x - a.x * b.z,
        a.x * b.y - a.y * b.x
    };
    return result;
}
