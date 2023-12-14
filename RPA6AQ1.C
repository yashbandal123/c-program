#include<stdio.h>
#include<conio.h>
int main()
{
char ch;
clrscr();
printf("enter a character:\n");
scanf("%c",&ch);

if(ch>='a'&& ch<='z')
 {
 ch=ch-32;
 printf("%c is uppercase\n",ch);
 }
 else if(ch>='A' && ch<='Z')
 {
 ch=ch+32;
 printf("%c is lowercase\n",ch);
 }
 getch();
 return 0;
}