#include<stdio.h>
#include<conio.h>
int main()
{
char c;
clrscr();
printf("enter a character");
scanf("%c",&c);
if(c>='A'&& c<='Z')
{
printf("uppercase",c);
}
else if(c>='a' && c<='z')
{
printf("lowercase",c);
}
getch();
return 0;
}
