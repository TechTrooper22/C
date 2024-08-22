#include <stdio.h>

int main() {
    int choice;
    float num1, num2, result;
    printf("Tejas Shrikhande.\n");
    printf("Enter operation:\n");
    printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n");
    scanf("%d", &choice);

    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    switch (choice) {
        case 1:
            result = num1 + num2;
            printf("Sum: %.2f\n", result);
            break;
        case 2:
            result = num1 - num2;
            printf("Difference: %.2f\n", result);
            break;
        case 3:
            result = num1 * num2;
            printf("Product: %.2f\n", result);
            break;
        case 4:
            if (num2 != 0) {
                result = num1 / num2;
                printf("Quotient: %.2f\n", result);
            } else {
                printf("Error! Division by zero is undefined.\n");
            }
            break;
        default:
            printf("Invalid choice!\n");
    }

    return 0;
}


