#include <stdio.h>

int main() {
    int arr[5];
    int i, sum = 0;

    printf("Enter 5 array elements:\n");

    for (i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < 5; i++) {
        sum = sum + arr[i];
    }

    printf("Sum of array elements = %d\n", sum);

    return 0;
}
