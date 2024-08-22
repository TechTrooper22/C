#include<stdio.h>
main()
{
 int t,a,b,c,d;
 printf("Tejas Shrikhande\n");
 printf("Enter amounts; ");
 scanf("%d%d%d%d",&a,&b,&c,&d);
 t = a+b+c+d;
 printf("Total amount = %d\n",t);
 if(t > 1500)
 {
  printf("Payable amount = %d",t-200);
 }
 else
 {
  printf("Payable amount = %d",t);
 }
}







