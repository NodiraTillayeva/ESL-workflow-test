#include "vector.h"

Vector3D vector_sum(Vector3D a, Vector3D b) {
    Vector3D result = {a.x + b.x, a.y + b.y, a.z + b.z};
    return result;
}

Vector3D vector_sub(Vector3D a, Vector3D b) {
    Vector3D result = {a.x - b.x, a.y - b.y, a.z - b.z};
    return result;
}

double vector_dot(Vector3D a, Vector3D b) {
    return a.x * b.x + a.y * b.y + a.z * b.z;
}

Vector3D vector_cross(Vector3D a, Vector3D b) {
    Vector3D result = {
        a.y * b.z - a.z * b.y,
        a.z * b.x - a.x * b.z,
        a.x * b.y - a.y * b.x
    };
    return result;
}
