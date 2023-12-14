#include<conio.h>
#include<stdio.h>
int main()
{
int a,b,i,check,j;
clrscr();
printf("enter a two number\n");
scanf("%d%d",&a,&b);
for(i=a; i<=b; i++)
 {
 if(i<2)
 continue;
  check=0;
    for(j=2; j<i; j++)
    {
      if(i%j==0)
      {
     check=1;
     }
 }
      if(check==0)
     {
     printf("%d ,",i);
      }
 }
getch();
return 0;
}
