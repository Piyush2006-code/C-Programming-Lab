#include <stdio.h>

int main() {
    int intArray[3] = {10, 20, 30};
    float floatArray[3] = {1.5, 2.5, 3.5};
    char charArray[3] = {'A', 'B', 'C'};

    int i;

    printf("--- Integer Array ---\n");
    for (i = 0; i < 3; i++) {
        printf("Value: %d, Address: %p\n",
               intArray[i], (void *)&intArray[i]);
    }

    printf("\n--- Float Array ---\n");
    for (i = 0; i < 3; i++) {
        printf("Value: %.2f, Address: %p\n",
               floatArray[i], (void *)&floatArray[i]);
    }

    printf("\n--- Character Array ---\n");
    for (i = 0; i < 3; i++) {
        printf("Value: %c, Address: %p\n",
               charArray[i], (void *)&charArray[i]);
    }

    return 0;
}