#include<stdio.h>
#include<conio.h>
int main()
{
double angle,angleradians,M_PI;
double sinvalue=sin(angleradians),cosvalue=cos(angleradians),tanvalue=tan(angleradians);
clrscr();
printf("enter the angle in degrees:");
scanf("%lf",&angle);
angleradians = angle*(M_PI/180.0);
printf("sine of %2f degrees is %4f\n",angle,sinvalue);
printf("cosine of %2f degrees is %4f\n",angle,cosvalue);
if(cosvalue !=0)
{
printf("tangent of %2f degrees is: %4f\n",angle, tanvalue);
}
else
{
printf("tangent is undefined for %2f degrees \n",angle);
}
getch();
return  0;
}