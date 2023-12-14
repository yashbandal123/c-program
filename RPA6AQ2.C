#include<stdio.h>
#include<conio.h>
int main()
{
char ch;
clrscr();
printf("enter a character");
scanf("%c",&ch);
if((ch>='A' && ch<='Z') || (ch>='a' &&ch<='z'))
{
if (ch>='A' && ch<='Z')
{
printf("uppercase alphabet");
}
else
{
printf("lowercase alphabe");
}
}
else if(ch>='0' &&ch<='9')
{
printf("the character is digit");
}
else
{
printf("the character is punctuattion mark");
}
getch();
return 0;
}