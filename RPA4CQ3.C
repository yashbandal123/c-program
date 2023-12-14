#include<stdio.h>
#include<stdio.h>
int main()
{
int n,reversed=0,remainder,original;
clrscr();
printf("enter a number");
scanf("%d",&n);
original=n;
while(n!=0)
{
remainder=n%10;
reversed=reversed*10+remainder;
n/=10;
}
if(original==reversed)
{
printf("%d is palindrome number",original);
}
else
{
printf("%d is not palindrome number",original);
}
getch();
return 0;
}