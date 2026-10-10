#include <stdio.h>

/* 1. No arguments and no return value */
void area1(void) {
    float base, height;

    printf("\nType 1: No arguments, no return value\n");
    printf("Enter base and height: ");
    scanf("%f %f", &base, &height);

    printf("Area of triangle = %.2f\n",
           0.5f * base * height);
}

/* 2. Arguments and no return value */
void area2(float base, float height) {
    printf("\nType 2: Arguments, no return value\n");
    printf("Area of triangle = %.2f\n",
           0.5f * base * height);
}

/* 3. No arguments but returns a value */
float area3(void) {
    float base, height;

    printf("\nType 3: No arguments, with return value\n");
    printf("Enter base and height: ");
    scanf("%f %f", &base, &height);

    return 0.5f * base * height;
}

/* 4. Arguments and returns a value */
float area4(float base, float height) {
    return 0.5f * base * height;
}

int main(void) {
    float base, height, result;

    area1();

    printf("\nEnter base and height for Type 2: ");
    scanf("%f %f", &base, &height);
    area2(base, height);

    result = area3();
    printf("Area of triangle = %.2f\n", result);

    printf("\nType 4: Arguments and return value\n");
    printf("Enter base and height: ");
    scanf("%f %f", &base, &height);

    result = area4(base, height);
    printf("Area of triangle = %.2f\n", result);

    return 0;
}