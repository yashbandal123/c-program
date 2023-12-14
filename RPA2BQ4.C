#include<stdio.h>
#include<conio.h>
int main()
{
float basicsalary,DA,HRA;
float grosssalary;
const float DA_1=0.25,HRA_1=0.20,DA_2=0.10,HRA_2=0.15;
clrscr();
printf("enter the basic salary of the employee:\n");
scanf("%f",&basicsalary);
if(basicsalary>50000)
{
DA = basicsalary*DA_1;
HRA = basicsalary*HRA_1;
}
else
{
DA = basicsalary*DA_2;
HRA = basicsalary*HRA_2;
}
grosssalary = basicsalary+DA+HRA;
printf("Gross salary of the employee is:%2f\n",grosssalary);
getch();
return 0;
}