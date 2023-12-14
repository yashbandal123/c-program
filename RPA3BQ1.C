#include<stdio.h>
#include<conio.h>
int main()
{
int a,b,c;
clrscr();

printf("1.sum\n");
printf("2.sub\n");
printf("3.multi\n");
printf("4.div\n");
printf("choice your operation");
scanf("%d",&c);
printf("enter two number:\n");
scanf("%d %d",&a,&b);
switch(c)
{
case 1 :
 printf("sum of %d and %d= %d",a,b,a+b);
 break;
case 2 :
 printf("sub of %d and %d= %d",a,b,a-b);
 break;
case 3 :
 printf("multi of %d and %d= %d",a,b,a*b);
 break;
case 4 :
 printf("div of %d and %d= %d",a,b,a/b);
 break;
default :
printf("incorrect");
break;
}
getch();
return 0;
}
