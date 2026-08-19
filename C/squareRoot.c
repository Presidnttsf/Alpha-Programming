#include <stdio.h>

float areaOfCircle(float radius) {
    const float PI = 3.14f;
    return PI * radius * radius;
}

void printSquare(double num) {
    printf("%.2lf\n", num * num);
}

int squareRoot(int num) {
    for (int i = 0; i * i <= num; i++) {
        if (i * i == num) {
            return i;
        }
    }

    return -1;
}

int main(void) {
    float radius = 5.645f;

    printf("Area of circle is %.3f.\n", areaOfCircle(radius));
    printf("Area of circle is %.3f.\n", areaOfCircle(4));

    printSquare(2.5);

    int result = squareRoot(5);

    if (result == -1) {
        printf("Not found\n");
    } else {
        printf("Square root is %d\n", result);
    }

    return 0;
}
