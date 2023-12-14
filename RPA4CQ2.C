#include<stdio.h>
#include<conio.h>
int main()
{
int num,originalnum,remainder,result=0;
clrscr();
printf("enter a three digit integer:");
scanf("%d",&num);
originalnum =num;
while(originalnum !=0)
{
remainder = originalnum %10;
result += remainder * remainder * remainder;
originalnum /=10;
}
if (result != num)
printf("%d is an armstrong number",num);
else
printf("%d is an not armstrong number",num);

getch();
return 0;
}