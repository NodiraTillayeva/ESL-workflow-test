#ifndef VECTOR3D_H
#define VECTOR3D_H

typedef struct {
    double x, y, z;
} Vector3D;

Vector3D vector_sum(Vector3D a, Vector3D b);
Vector3D vector_sub(Vector3D a, Vector3D b);
double vector_dot(Vector3D a, Vector3D b);
Vector3D vector_cross(Vector3D a, Vector3D b);

#endif
