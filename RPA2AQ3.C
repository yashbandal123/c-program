#include<stdio.h>
#include<conio.h>
int main()
{
int a,b,c;
clrscr();
printf("enter three numbers:\n");
scanf("%d %d %d",&a,&b,&c);
if(a>b && a<c)
{
printf("%d is between other two number",a);
}
else if(a<b && a>c)
{
printf("%d is between other two number",a);
}
getch();
return 0;
}