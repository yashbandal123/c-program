#include<stdio.h>
#include<conio.h>
int main()
{
int n,i;
int count_greter,count_lesser;
clrscr();
printf("Enter a number:\n");
scanf("%d",&n);
for(i=0; i<n; i++)
{
if(i>999)
{
count_greter++;
}
else if(i<99)
{
count_lesser++;
}
 }
 printf("count of number is greater than 999 is %d\n",count_greter);
 printf("count of number is lesser than 99 is %d\n",count_lesser);
 getch();
 return 0;
 }