#include<stdio.h>
#include<conio.h>
int main()
{
int celsius,fahrenheit;
clrscr();
printf("enter a tempreature in fahrenheit");
scanf("%d",&fahrenheit);
celsius = (fahrenheit -32)*5/9;
printf("%2d tempreature = %2d celsius",fahrenheit,celsius);
getch();
return 0;
}