#include<stdio.h>
#include<conio.h>
int main()
{
int a,b,c,d;
clrscr();
printf("enter four numbers");
scanf("%d %d %d %d",&a,&b,&c,&d);
if(a<b && a<c && a<d)
{
printf("%d is Minimum",a);
}
else if(b<a && b<c && b<d)
{
printf("%d is Minimum",b);
}
else if(c<a && c<b && c<d)
{
printf("%d is Minimum",c);
}
else if(d<a && d<b && d<c)
{
printf("%d is Minimum",d);
}
getch();
return 0;
}