#include<stdio.h>
main()
{
int y,x,n;
printf("Enter the value of n = ");
scanf("%d",&n);
for(y = 0; y < n; y++)
// as the value of 'y' increases, number of * decreases. 
{
for(x = 0; x < n; x++)
// as the value of 'x' increases, number of * decreases. 
{
printf("*");
}
printf("\n");
}
}

    