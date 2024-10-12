#include <stdio.h>
#include "vector.h"

int main() {
    Vector3D a = {1.0, 2.0, 3.0};
    Vector3D b = {4.0, 5.0, 6.0};

    Vector3D result_add = add(a, b);
    Vector3D result_sub = sub(a, b);
    float result_dot = dot(a, b);
    Vector3D result_cross = cross(a, b);

    printf("Add: (%.2f, %.2f, %.2f)\n", result_add.x, result_add.y, result_add.z);
    printf("Sub: (%.2f, %.2f, %.2f)\n", result_sub.x, result_sub.y, result_sub.z);
    printf("Dot product: %.2f\n", result_dot);
    printf("Cross product: (%.2f, %.2f, %.2f)\n", result_cross.x, result_cross.y, result_cross.z);

    return 0;
}
