#include<stdio.h>
#include<conio.h>
int main()
{
float l,w;
float a;
clrscr();
printf("enter the length:\n");
scanf("%f",&l);
printf("enter the width:\n");
scanf("%f",&w);
if(l==w)
{
printf("it is a square\n");
}
else
{
printf("it is a retanglel\n");
}
a=l*w;
printf("the area of rectangle is %2f\n",a);
getch();
return 0;
}