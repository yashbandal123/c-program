#include<stdio.h>
#include<conio.h>
int main()
{
int a,b,c;
clrscr();
printf("Enter three numbers:\n");
scanf("%d %d %d",&a,&b,&c);
if(a>b && a>c)
{
printf("%d is Maximum",a);
}
else if(b>a && b>c)
{
printf("%d is Maximum",b);
}
else if(c>a && c>b)
{
printf("%d is Maximum",c);
}
getch();
return 0;
}