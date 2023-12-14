#include<stdio.h>
#include<conio.h>
int main()
{
int a,b,am,hm;
clrscr();
printf("enter a two number\n");
scanf("%d %d",&a,&b);
am=a+b/2;
hm=a*b/(a+b);
printf("arithmetic mean is %d\n",am);
printf("harmonic mean is %d\n",hm);
getch();
return 0;
}