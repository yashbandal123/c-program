#include<stdio.h>
#include<conio.h>
int main()
{
int n,i;
double sum=0.0,average;
clrscr();
printf("enter value of n\n");
scanf("%d",&n);
for(i=1; i<=n; i++)
{
sum+=i;
}
average=sum/n;
printf("sum of the first %d number is %2lf\n",n,sum);
printf("Average of the first %d numbers is %2lf\n",n,average);
getch();
return 0;
}

