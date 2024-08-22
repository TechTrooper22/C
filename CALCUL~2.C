#include<stdio.h>
#include<conio.h>
void main()
{
int a, b;
clrscr();
printf("Tejas Shrikhande.\n");
printf("Enter the Value of a & b: ");
scanf("%d%d", &a, &b);
printf("Addition = %d\nSubtraction = %d\nProduct = %d\nQuotient = %d\nRemainder = %d\n", a+b,a-b,a*b,a/b,a%b);
getch();
}