#include<stdio.h>
void main()
{
 int i,j,arr[10]={2,3,4,5,6,7,8,9,10,11};
 printf("Tejas Shrikhande.\n");
 for(i=0;i<10;i++)
 {
  for(j=2;j<=arr[i];j++)
  {
   if(arr[i]%j == 0)
   {
    break;
   }
  }
  if(arr[i] == j)
  {
   printf("%d is a prime number\n",arr[i]);
  }
  else
  {
   printf("%d is an even number\n",arr[i]);
  }
 }
}

