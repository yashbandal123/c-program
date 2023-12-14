#include<stdio.h>
#include<conio.h>
int main()
{
int l,b,h,a,v;
clrscr();
printf("enter a length\n");
scanf("%d\n",&l);
printf("enter a breadth\n");
scanf("%d\n",&b);
printf("enter a height\n");
scanf("%d\n",&h);
a=2*l*b+b*h+l*h;
v=l*b*h;
printf("surface area of cuboid is %d\n",a);
printf("volume of cuboid is %d\n",v);
getch();
return 0;

}
