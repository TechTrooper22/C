#include <stdio.h>

int main() {
    int choice;
    float temperature;
    printf("Tejas Shrikhande.\n");
    printf("Choose conversion:\n");
    printf("1. Celsius to Fahrenheit\n");
    printf("2. Fahrenheit to Celsius\n");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("Enter temperature in Celsius: ");
            scanf("%f", &temperature);
            printf("%.2f Celsius is equal to %.2f Fahrenheit\n", temperature, (temperature * 9/5) + 32);
            break;

        case 2:
            printf("Enter temperature in Fahrenheit: ");
            scanf("%f", &temperature);
            printf("%.2f Fahrenheit is equal to %.2f Celsius\n", temperature, (temperature - 32) * 5/9);
            break;

        default:
            printf("Invalid choice\n");
    }

    return 0;
}





