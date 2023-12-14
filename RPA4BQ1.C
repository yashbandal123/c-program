#include<stdio.h>
#include<conio.h>
int main()
{
int i,a;
clrscr();
printf("enter a number\n");
scanf("%d",&a);
for(i=1; i<a; i++)
{
if (a%i==0)

printf("a is divisors %d\n",i);
}
getch();
return 0;
}