#include<stdio.h>
main()
{
int ch,r,l,b,h,a;
float Area;
printf("1. Area of Circle \n2. Area of Rectangle \n3. Area of Triangle \n");
printf("Enter your choice \n");   
scanf("%d",&ch);
switch (ch)
{
case 1:
printf("Enter the value of radius \n");
scanf("%d",&r);
Area = 3.14*r*r;
break;
case 2:
printf("Enter the value of l & b \n");
scanf("%d %d",&l,&b);
Area = l*b;
break;
case 3:
printf("Enter the value of a & h \n");
scanf("%d %d",&a,&h);
Area = 0.5*a*h;
break;
default:
printf("Wrong input");
break;
}
printf("Area = %.2d",Area);
}
