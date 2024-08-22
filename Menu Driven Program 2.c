#include<stdio.h>
main()
{
int a, b, n, x;
float y;
printf("1. y = ax%b \n2. y = ax²+b² \n3. y = a-bx \n4. y = a+x/b \n");
printf("Enter the choice \n");
scanf("%d",&n);
printf("Enter the value of a,b,n,x \n");
scanf("%d %d %d %d",&a,&b,&n,&x);
switch(n)
{
case 1:
y = a*(x%b);
printf("The value of y is %d",y);
break;
case 2:
y = (a*x*x)+(b*b);
printf("The value of y is %d",y);
break;
case 3:
y = a-(b*x);
printf("The value of y is %d",y);
break;
case 4:
y = a+(x/b);
printf("The value of y is %d",y);
break;
}
}