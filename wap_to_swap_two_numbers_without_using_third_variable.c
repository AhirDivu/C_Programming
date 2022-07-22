#include<stdio.h>
int main()
{
    int n1,n2;
   printf(" Enter value of n1 : ");
   scanf("%d",&n1);
   printf(" Enter value of n2 : ");
    scanf("%d",&n2);
	n1=n1+n2;
    n2=n1-n2;
    n1=n1-n2;
    printf("Swap number: \n n1=%d\n n2=%d",n1,n2);
}