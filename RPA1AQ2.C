#include<stdio.h>
#include<conio.h>
int main()
{
float radius, height;
float surfacearea, volume;
clrscr();
printf("enter radius and height of cylinder:\n");
scanf("%f %f",&radius,&height);
surfacearea=2*3.14*radius*(radius +height);
volume = 3.14*radius*radius*height;
printf("surface area of cylinder is %3f",surfacearea);
printf("\n volume of cylinder is %3f",volume);
getch();
return 0;
}
