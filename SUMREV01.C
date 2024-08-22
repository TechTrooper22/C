#include<stdio.h>
#include<conio.h>
main()
{
 int n, d1, d2, d3, d4;
 printf("Tejas Shrikhande.\n");
 printf("Enter number: ");
 scanf("%d",&n);
 d1 = n%10;
 n = n/10;
 d2 = n%10;
 n = n/10;
 d3 = n%10;
 n = n/10;
 d4 = n%10;
 printf("\nSum = %d",d1+d2+d3+d4);
 printf("\nReverse = %d",d1*1000+d2*100+d3*10+d4);
}









