 #include<stdio.h>
 #include<conio.h>
 #define leap_or_not(leap)(x%4==0)?\
	     printf("%dits leap year"):\
	     printf("%dits not leap year");
void main()
{
int year;
clrscr();
printf("enter the year\n");
leap_or_not:
getch();
}