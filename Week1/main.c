#include <stdio.h>
#include "vector.h"

int main() {
    Vector3D a = {1, 2, 3};
    Vector3D b = {4, 5, 6};

    Vector3D sum = vector_sum(a, b);
    Vector3D sub = vector_sub(a, b);
    double dot = vector_dot(a, b);
    Vector3D cross = vector_cross(a, b);

    printf("a + b = (%f, %f, %f)\n", sum.x, sum.y, sum.z);
    printf("a - b = (%f, %f, %f)\n", sub.x, sub.y, sub.z);
    printf("a . b = %f\n", dot);
    printf("a x b = (%f, %f, %f)\n", cross.x, cross.y, cross.z);

    return 0;
}
