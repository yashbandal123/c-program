#include<stdio.h>
#include<conio.h>
int main()
{
char a;
clrscr();
printf("enter a character");
scanf("%c",&a);
if(a=='a'|| a=='i'|| a=='e'|| a=='o'|| a=='u')
{
printf("vowel",a);
}
else
printf("constant",a);
getch();
return 0;
}