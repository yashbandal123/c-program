#include<stdio.h>
#include<conio.h>
int i;
int factorial(int n)
{
if(n == 0 || n == 1)
{
return 1;
}
else
{
return n*factorial (n - 1);
}
}
int iseven(int n)
{
if(n %2 ==0)
{
return 1;
}
else
{
return 0;
}
}
int isperfect(int n)
{
int sum =0;
for (i = 1; i < n; i++)
{
if(n%i==0)
{
sum += i;
}
}
return(sum == n);
}

int main()
{
int number;
int choice;
clrscr();
printf("enter a number");
scanf("%d",&number);
printf("chose an operation:\n");
printf("1. factorial\n 2.even/odd\n 3.perfect number\n");
scanf("%d",&choice);
switch(choice)
{
case 1:
printf("factorial of %d is %d\n", number,factorial(number));
break;
case 2:
if(iseven(number))
{
printf("%d is  even\n",number);
}
else{
printf("%d is odd\n",number);
}
break;
case 3:
if(isperfect(number))
{
printf("%d is a perfect number\n",number);
}
else{
printf("%d is  not a perfect number\n",number);
}
break;
default:
printf("incorrect");
}
getch();
return 0;
}