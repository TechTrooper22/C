#include<stdio.h>
struct bookdetail
{
char name[20],author[20];
float price;
int total_copies;
};
main()
{
struct bookdetail b[50];
int num,i;
printf("Enter the number of books : ");
scanf("%d",&num);
printf("\n");
}
for(i=0;i<num;i++)
{
printf("\t Books %d Details : \n",i+1);
printf("\n Enter Book name : \n");
scanf("%s", &b[i].name);
printf("Enter Author opf Book : \n");
scanf("%s",&b[i].author);
printf("Enter Price of Book : \n");
scanf("%d", &b[i].price);
printf("Enter the number of copies available in Library : \n");
scanf("%d",b[i].total_copies);
}
for(i=0;i<num;i++)
{
printf("\n");
printf("\t Book %d Name : %s \n", i+1,b[i].name);
printf("\t Author : %s \n",i+1,b[i].author);
printf("\t Book %d Price : %f \n",i+1,b[i].price);
printf("\t Book availabe in Library : %d \n");
} 