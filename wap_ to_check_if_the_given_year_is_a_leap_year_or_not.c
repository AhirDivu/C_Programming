#include<stdio.h>
int main()
{
    int Year;
    printf("Enter Any Year:");
    scanf("%d",&Year);
    if(Year%4==0)

{
	printf("%d",Year);
	printf(" Is Leap Year");
}
else
{
	printf("%d",Year);
    printf(" Is Not Leap Year");
}

}