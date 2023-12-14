#include<stdio.h>
#include<conio.h>
int main()
{
int day;
clrscr();
printf("enter a no. of day (1 to 7)");
scanf("%d",&day);
switch(day)
{
case 1:
 printf("monday");
 break;
case 2:
 printf("tuesday");
 break;
case 3:
 printf("wednesday");
 break;
case 4:
 printf("thursday");
 break;
case 5:
 printf("friday");
 break;
case 6:
 printf("satarday");
 break;
case 7:
 printf("sunday");
 break;
}
getch();
return 0;
}