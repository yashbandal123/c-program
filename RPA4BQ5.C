#inclide<stdio.h>
#include<conio.h>
int main()
{
int n,sum=0,i,first,last;
printf("\nenter a number:");
scanf("%d",&n);
last=n%10;
while(n>=10)
{
n=n/10;
}
first=n;
printf("\n last digit is %d",last);
printf("\n first digit is %d",first);
sum=first+last;
printf("\n sum of first and last digit is %d",sum);
getch();
return 0;
}
