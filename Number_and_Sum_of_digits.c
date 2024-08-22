#include<stdio.h>
main()
{
int n,digit=0,rem,sum;
printf("Enter the number : ");
scanf("%d",&n);
while(n>0)
{
rem=n%10;
n=n/10;
digit=digit+1;
sum=sum+rem;
}
printf("Number of digits : %d\n",digit);
printf("Sum of digits : %d",sum);
}