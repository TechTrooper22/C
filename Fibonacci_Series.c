#include<stdio.h>
main()
{
int i=0, j=1, k, n = 10;
printf("The Fibonacci series is \n");
printf("%d%d",i,j);
k=i+j;
while ( k <= n )
{
printf("%d",k);
i=j;
j=k;
k=i+j;
}
}



