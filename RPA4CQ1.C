#include<stdio.h>
#include<conio.h>
int main()
{
int n,reverse=0,remaindar;
clrscr();
printf("enter a number");
scanf("%d",&n);
while(n!=0)
{
remaindar=n % 10;
reverse=reverse*10+remaindar;
 n/=10;
}
printf("reversed number = %d",reverse);
  getch();
  return 0;
}