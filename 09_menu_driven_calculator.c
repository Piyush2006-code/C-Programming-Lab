
#include <stdio.h>

int main() {
    int choice;
    double num1, num2;

    do {
        printf("\n--- MENU-DRIVEN CALCULATOR ---\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice >= 1 && choice <= 4) {
            printf("Enter two numbers: ");
            scanf("%lf %lf", &num1, &num2);
        }

        switch (choice) {
            case 1:
                printf("Result = %.2f\n", num1 + num2);
                break;

            case 2:
                printf("Result = %.2f\n", num1 - num2);
                break;

            case 3:
                printf("Result = %.2f\n", num1 * num2);
                break;

            case 4:
                if (num2 != 0) {
                    printf("Result = %.2f\n", num1 / num2);
                } else {
                    printf("Error: Division by zero is not allowed.\n");
                }
                break;

            case 5:
                printf("Exiting calculator. Goodbye!\n");
                break;

            default:
                printf("Invalid choice. Please choose 1 to 5.\n");
        }

    } while (choice != 5);

    return 0;
}
