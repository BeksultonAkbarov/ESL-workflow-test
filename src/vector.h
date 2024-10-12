#ifndef VECTOR_H
#define VECTOR_H

typedef struct {
    float x, y, z;
} Vector3D;

Vector3D add(Vector3D a, Vector3D b);
Vector3D sub(Vector3D a, Vector3D b);
float dot(Vector3D a, Vector3D b);
Vector3D cross(Vector3D a, Vector3D b);

#endif // VECTOR_H
