#include<stdio.h>
#include<conio.h>
int main()
{
int n;
clrscr();
printf("enter a number:\n");
scanf("%d",&n);
if(n%2==0)
{
printf("%d is even",n);
}
else
{
printf("%d is odd",n);
}
getch();
return 0;
}