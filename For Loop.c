#include<stdio.h>
main()
{
int n;
printf("Enter the number: \n");
scanf("%d",&n);
printf("The table of number %d: \n",n);
for(int i=1;i<=10;i++)
{
printf("%d \n",n*i);
}
}