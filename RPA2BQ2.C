#include<stdio.h>
#include<conio.h>
int main()
{
int a,b,c,d,e,sum,percentage;
clrscr();
printf("enter your five subject mark");
scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
sum=a+b+c+d+e;
printf("total marks is %d",sum);
percentage=sum/5;
printf("percentage is %d",percentage);
if(percentage<=100)
{
printf("grade a");
}
else if(percentage<=80)
{
printf("grade b");
}
else if(percentage<=50)
{
printf("Fail");
}
getch();
return 0;
}