#include<stdio.h>
#include<conio.h>
int main()
{
int a,b,c;
clrscr();
printf("enter three numbers:\n");
scanf("%d %d %d",&a,&b,&c);
b=a-c;
printf("%d is middle number\t",b);
if(a>b && b>c)
{
printf("%d is gretest",a);
}
else if(b>a && b>c)
{
printf("%d is gretest",b);
}
else if(c>a && c>b)
{
printf("%d is gretest",c);
}
getch();
return 0;
}
