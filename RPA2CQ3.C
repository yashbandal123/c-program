#include<stdio.h>
#include<conio.h>
int main()
{
int i;
clrscr();
printf("enter a number");
scanf("%d",&i);
if(i==0)
{
printf("zero",i);
}
else if(i<=0)
{
printf("negative",i);
}
else
printf("positive",i);
		     getch();
		     return 0;
		     }