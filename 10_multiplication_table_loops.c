
#include <stdio.h>

int main() {
    int number, i;

    printf("Enter a number: ");
    scanf("%d", &number);

    printf("\n--- Using while loop ---\n");
    i = 1;
    while (i <= 10) {
        printf("%d x %d = %d\n", number, i, number * i);
        i++;
    }

    printf("\n--- Using do-while loop ---\n");
    i = 1;
    do {
        printf("%d x %d = %d\n", number, i, number * i);
        i++;
    } while (i <= 10);

    printf("\n--- Using for loop ---\n");
    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", number, i, number * i);
    }

    return 0;
}
