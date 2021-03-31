//Write a program to add two user input numbers using one function.
#include<stdio.h>
int sum(int x,int y)
{
return x+y;
}
int main()
{
int a,b,s;
printf(“enter the number 1:”);
scanf(“%d”,&a);
printf(“enter the number 2:”);
scanf(“%d”,&b);
s=sum(a,b);
printf(“sum of %d” And %d Is :%d”,a,b,s);
return 0;
}
