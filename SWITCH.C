#include<stdio.h>

main()
{
 int n,a,b;
 printf("Tejas Shrikhande\n");
 printf("1.Area of Rectangle\n2.Area of Square\n3.Area of Cirle\n");
 printf("Enter your choice: ");
 scanf("%d",&n);
 switch(n)
 {
  case 1:
   a=5,b=4;
   printf("Area = %d",a*b);
   break;
  case 2:
   a=10;
   printf("Area = %d",a*a);
   break;
  case 3:
   a=2;
   printf("Area = %d",(22/7)*a*a);
   break;
  default:
   printf("Invalid Choice");
   break;
 }
}










