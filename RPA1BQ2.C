#include<stdio.h>
#include<conio.h>
int main()
{
int a,b,c,d;
clrscr();
printf("enter a two number");
scanf("%d %d",&a,&b);
c=a/b;
d=a%b;
printf("division is %d",c);
 printf("reminder is %d",d);
 getch();
 return 0;
}