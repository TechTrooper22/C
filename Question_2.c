// QUESTION NO. 2
#include<stdio.h>
int main()
{
int i, j, n, count;
float sum;
printf("Enter any Number : ");
scanf("%d",&n);
if(n % 2 == 0)
{
    printf("Enter total number of terms : ");
    scanf("%d",&n);
    sum = 1;
    count = 1;
    for (i=1;i<n;i++)
    {
        sum = sum + ((float) (pow (count, 3)))/((float) (pow (count, 3)));
        count = count = 2;
    }
    printf("Sum = %.2f \n",sum);
}
    else
    {
       for(i=n;i>=1;i--)
       {
           for(j=1;j<=i;j++)
           {
               printf("%c ",64+j);
           }
           printf("\n");
       }
    }
}
