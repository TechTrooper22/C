#include<stdio.h>
main()
{
 char ch;
 printf("Enter Character: ");
 scanf("%c",&ch);
 switch(ch)
 {
  case 'a':
  case 'e':
  case 'i':
  case 'o':
  case 'u':
  case 'A':
  case 'E':
  case 'I':
  case 'O':
  case 'U':
   printf("Its a Vowel");
  break;
  default:
   printf("Its a Consonant");
 }
}








