#include<stdio.h>
#include<conio.h>
  int main()
  {
  int i;
  clrscr();
  printf("enter a number");
  scanf("%d",&i);
  if(i%2==0)
  {
  printf("even",i);
  }
  else
  printf("odd",i);
  getch();
  return 0;
  }

