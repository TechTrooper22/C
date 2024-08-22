#include <stdio.h>
int main() 
{
    printf("Tejas Shrikhande.\n");
    int num, originalNum, remainder, sum = 0;
    printf("Enter a 5-digit number: ");
    scanf("%d", &num);
    originalNum = num;
    while (num > 0) {
        remainder = num % 10;  
        sum += remainder;   
        num /= 10;            
    }
    printf("Sum of digits in %d = %d\n", originalNum, sum);
    return 0;
}



