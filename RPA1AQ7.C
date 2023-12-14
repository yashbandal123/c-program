#include<stdio.h>
#include<conio.h>
int main()
{
char a;
clrscr();
printf("enter a character\n");
scanf("%c",&a);
printf("previous character %c\n",a-1);
printf("next character %c\n",a+1);
getch();
return 0;

}