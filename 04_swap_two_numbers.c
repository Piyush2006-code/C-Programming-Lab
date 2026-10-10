
#include <stdio.h>

int main() {
    int a, b, temp;

    printf("Enter the first number: ");
    scanf("%d", &a);

    printf("Enter the second number: ");
    scanf("%d", &b);

    printf("\nBefore swapping:\n");
    printf("a = %d, b = %d\n", a, b);

    temp = a;
    a = b;
    b = temp;

    printf("\nAfter swapping:\n");
    printf("a = %d, b = %d\n", a, b);

    return 0;
}
