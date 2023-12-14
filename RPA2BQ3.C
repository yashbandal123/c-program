#include<stdio.h>
#include<conio.h>
int main()
{
char a;
clrscr();
printf("enter a character");
scanf("%c",&a);
if(a>='A' || a<='Z')
{
printf("uppercase",a);
}
else if (a>='a' || a<='z')
{
printf("lowercase",a);
}
getch();
return 0;
}