#include<stdio.h>
int main()
{
    float a,b,x,y;
    printf("Enter Number Of Days:");
    scanf("%f",&a);
    x=a/365;
    printf("%f\n",x);
    printf("Enter Number Of Years:");
    scanf("%f",&b);
    y=b*365;
    printf("%f",y);
} 