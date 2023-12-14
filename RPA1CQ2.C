#include<stdio.h>
#include<conio.h>
int main()
{
int r,a,c;
clrscr();
printf("enter a radius\n");
scanf("%d",&r);
a=3.14*r*r;
c=2*3.14*r;
printf("area of circle is %d\n",a);
printf("circumference of circle is %d\n",c);
getch();
return 0;
}
