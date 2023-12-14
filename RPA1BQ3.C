#include<stdio.h>
#include<conio.h>
int main()
{
int a,b,c,d,sum,sub,div;
clrscr();
printf("enter a four number");
scanf("%d %d %d %d",&a,&b,&c,&d);
sum=a+b;
printf("sum of a and b is %d\n ",sum);
sub=d-c;
printf("sub of d and c is %d\n",sub);
div=sum/sub;
printf("div off sum and sub %d\n",div);
getch();
return 0;
}