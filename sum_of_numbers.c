//Write a program to find the sum of n different numbers using 4 functions
#include<stdio.h>
int main()
{
    int n,a[20],sum=0;
    printf("enter the numbers");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("enter new number");
        scanf("%d",&a[i]);
    }
    printf("the final sum is %d",sum);
    return 0;
}
