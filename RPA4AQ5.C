#include<stdio.h>
#include<conio.h>
  int main()
  {
  int n,i;
  int sum_odd=0,sum_even=0;
  clrscr();
  printf("Enter a number:\n");
  scanf("%d",&n);
  for(i=0; i<n; i++)
  {
  printf("enter a integer %d\n",i+1);
  scanf("%d",&i);
  }
  for(i=0; i<n; i++)
  {
  if(i %2==0)
  {
  sum_even+=i;
  }
  else
  {
  sum_odd+=i;
  }
  }
  printf("number of sum_even %d\n",sum_even);
  printf("number of sum_odd %d\n",sum_odd);
  getch();
  return 0;
  }


