#include<stdio.h>
int fact(int);
void main()
{
 int n, factorial;
 printf("Enter a number: ");
 scanf("%d",&n);
 factorial = fact(n);
 printf("Factorial is %d",factorial);
}

int fact(int n)
{
 int r=1;
 if(n==1)
 {
  return 1;
 }
 else
 r = n * fact(n-1);
 return r;
}




