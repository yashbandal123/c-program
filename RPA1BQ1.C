#include<stdio.h>
#include<conio.h>
int main()
{
int a,b,c;
clrscr();
printf("enter two number\n");
scanf("%d %d",&a,&b);
printf("before interchange a=%d,b=%d",a,b);
c=a;
a=b;
b=c;
printf("\ninterchange character is a=%d, b=%d",a,b);
getch();
return 0;
}