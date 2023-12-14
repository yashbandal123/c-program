#include<stdio.h>
#include<conio.h>
int main()
{
int a,i,sum=0;
clrscr();
printf("enter a number\n");
scanf("%d",&a);
for(i=1; i<=a; i++)
{
if(a%i==0)
{
printf("num of divisor is %d\n",i);
sum=sum+i;
}
}
printf("sum of all divisior is %d\n",sum);
getch();
return 0;
}
