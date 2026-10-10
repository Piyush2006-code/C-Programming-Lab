
#include <stdio.h>

int main() {
    int a = 10, b = 5, c = 2;

    printf("a = %d, b = %d, c = %d\n\n", a, b, c);

    printf("a + b * c = %d\n", a + b * c);
    printf("(a + b) * c = %d\n", (a + b) * c);
    printf("a - b - c = %d\n", a - b - c);
    printf("a / b * c = %d\n", a / b * c);
    printf("a %% b = %d\n", a % b);

    return 0;
}
