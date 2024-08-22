// QUESTION NO. 3
#include<stdio.h>
main()
{
    int n, first_half, second_half, sum, sq;
    printf("Enter any four digit number : ");
    scanf("%d",&n);
    first_half = n / 100;
    second_half = n % 100;
    sum = (first_half + second_half );
    sq = sum * sum;
    if(n == sq)
    {
        printf("Entered number is a Tech number");
    }
    else
    {
        printf("Entered number is not a Tech number");
    }
 return 0;
}