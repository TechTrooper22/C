#include<stdio.h>
main()
{
 int n,q,r,s=0;
 printf("Tejas Shrikhande.\n");
 printf("Enter number: ");
 scanf("%d",&n);
 printf("Reverse: ");
 while(n != 0)
 {
  r=n%10;
  s = s+r;
  n=n/10;
  printf("%d",r);
 }
 printf("\nSum = %d",s);
}








