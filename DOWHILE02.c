#include <stdio.h>

int main() {
    printf("Tejas Shrikhande.\n");
    int i = 1;      
    int sum = 0;    
    do {
        sum += i;   
        i++;       
    } while (i <= 10);  
    printf("Sum of the first 10 numbers: %d\n", sum);
    return 0;
}


