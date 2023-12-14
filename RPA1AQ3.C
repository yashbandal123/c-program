#include<stdio.h>
#include<conio.h>
int main()
{
int u,a,t,v,s;
clrscr();
printf("enter a initial velocity");
scanf("%d",&u);
printf("enter a accelaration");
scanf("%d",&a);
printf("enter a time");
scanf("%d",&t);
v=u+a*t;
s=u+a*t*t;
printf("velocity is %d\n",v);
printf("distance is %d\n",s);
getch();
return 0;
}