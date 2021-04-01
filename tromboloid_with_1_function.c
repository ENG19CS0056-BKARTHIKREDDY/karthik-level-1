//Write a program to find the volume of a tromboloid using one function

 #include<stdio.h>
float vol(float h,float b,float d)
{
    float v;
    v=(0.33)*((h*d*b)+(d/b));
    return v;
}
int main()
{
    float h,b,d,volume;
    printf("enter the value of h:");
    scanf("%f",&h);
    printf("enter the value of b:");
    scanf("%f",&b);
    printf("enter the value of d:");
    scanf("%f",&d);
    volume=vol(h,b,d);
    printf("the volume of tromboloid is %f",volume);
    return 0;
}
