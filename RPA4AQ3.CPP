#include<stdio.h>
#include<conio.h>
int main()
{
int n,i,num;
int evencount=0,oddcount=0;
clrscr();
printf("enter a number:\n");
scanf("%d",&n);
for(i=0; i<n; i++)
{
scanf("%d",&num);
if(num%2==0)
{
evencount++;
}
else
{
oddcount++;
}
}
printf("%d is evencount",evencount);
printf("%d is oddcount",oddcount);
getch();
return 0;
}