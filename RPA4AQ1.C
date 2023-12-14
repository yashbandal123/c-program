#include<stdio.h>
#include<conio.h>
int main()
{
int m,n,i;
clrscr();
printf("Enter two numbers:\n");
scanf("%d %d",&m,&n);
for(i=m; i<=n; i++)
{
 if(i%3==0 && i%7!=0)
 {
 printf("%d\t",i);
 }
 }
 getch();
 return 0;
 }