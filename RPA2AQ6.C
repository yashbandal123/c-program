#include<stdio.h>
#include<conio.h>
int main()
{
int n;
clrscr();
printf("enter a number:\n");
scanf("%d",&n);
if(n%5==0 && n%7==0)
{
printf("%d is divisible by 5 and 7",n);
}
else
{
printf("%d is not divisible by 5 and 7",n);
}
getch();
return 0;
}