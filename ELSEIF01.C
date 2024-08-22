#include<stdio.h>
main()
{
 int n;
 printf("Tejas Shrikhande.\n");
 printf("Enter number: ");
 scanf("%d",&n);
 if(n%8==0 && n%5==0)
 {
  printf("It is Divisible by 5 & 8");
 }
 else if(n%8==0)
 {
  printf("It is Divisible by 8");
 }
 else if(n%5==0)
 {
  printf("It is Divisible by 5");
 }
 else
 {
  printf("It is not divisible by neither 8 nor 5");
 }
}









