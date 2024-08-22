#include<stdio.h>
main()
{
 int t,a,b,c,d,e;
 float p;
 printf("Tejas Shrikhande\n");
 printf("Enter Marks: ");
 scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
 t = a+b+c+d+e;
 p = (t * 100)/250;
 printf("\nTotal Marks: %d\nPercentage: %f\n",t,p);
 if(p>=40 && p<=0)
 {
  printf("Fail");
 }
 else if(p>=50 && p<=59)
 {
  printf("Grade C");
 }
 else if(p>=60 && p<=69)
 {
  printf("Grade B");
 }
 else if(p>=70 && p<=79)
 {
  printf("Grade B+");
 }
 else if(p>=80 && p<=89)
 {
  printf("Grade A");
 }
 else
 {
  printf("Grade A+");
 }
}








