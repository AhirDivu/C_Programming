#include<stdio.h>
int main()
{
    float p,r,t;
    
    printf("Enter Principle amount=");
    scanf("%f",&p);
    printf("Enter Interest rate=");
    scanf("%f",&r);
    printf("Enter Time period=");
    scanf("%f",&t);
    printf("Simple interest is = %f",(p*r*t)/100);
}