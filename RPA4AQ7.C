#include<stdio.h>
#include<conio.h>
int main()
{
int n,num=0;
   clrscr();
printf("enter an number");
scanf("%d",&n);
while(n!=0)
{
n=n/10;
   num++;
}
printf("num of digit is %d",num);
 getch();
 return 0;
}
