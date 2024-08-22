#include <stdio.h>
main() 
{  
char choice;
char answer;
do
{
printf("1. Enter any Character & print its ASCII value \n");
printf("2. Accept the weight in kg as input and display the amount to be paid by the customer \n");
printf("3. Exit \n");  
scanf("%c",&choice);
switch(choice)
{
case 1:
char c;
printf("Enter any Character  : ");
scanf("%c", &c);  
printf("ASCII value of %c = %d", c, c);
break;
case 2:
int w;
printf("Enter the Weight of Parcel in Kilograms : ");
scanf("%d",&w);
if( w <= 10 )
{
printf("The Amount to be Paid by The Customer = %d",(w*25) + (0.05*(w*25)));
}
else if( w >= 20 && w <= 30 )
{
printf("The Amount to be Paid by The Customer = %d",(w*20) + (0.05*(w*20)));
} 
else if( w > 30 )
{
printf("The Amount to be Paid by The Customer = %d",(w*10) + (0.05*(w*10)));
} 
else
{
printf("You Entered Wrong Weight");
}
break;
case 3:
printf("Exit \n");
break;
default :
printf("Entered wrong Choice \n");
break;
}
printf("Do youn want to select Choice again ( Yes OR No ) ? \n");
scanf("%c",&answer);
}while(answer == 'Y');
}
