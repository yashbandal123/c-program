#include<stdio.h>
#include<conio.h>
int main()
{
int n, sum=0, i;
printf("enter a number:");
scanf("%d",&n);
for (i=1; i<n; i++)
{
if (n%i==0)
{
printf("\n %d is divisor",i);
sum=sum+i;
}
}
printf("\n sum of all divisor is %d",sum);
if(n%sum==0)
printf("\n\n number is perfect");
else
printf("\n\n number is not perfect");
getch();
return 0;

}
