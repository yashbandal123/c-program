 #include<stdio.h>
 #include<conio.h>
 int main()
 {
 int n, sum=0, i;
 printf("enter a number:");
 scanf("%d",&n);
 while(n!=0)
 {
 sum = sum+n%10;
 n=n/10;
 }
 printf("sum of digit is =%d",sum);
 getch();
 return 0;

 }