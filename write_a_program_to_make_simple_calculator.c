#include <stdio.h>
int main()
{
	int A, B, Addition, Substraction, Multiplication;
	float Division,Modulo;
	printf(" Enter value of a : ");
	scanf("%d", &A);
	printf(" Enter value of b : ");
	scanf("%d", &B);
	Addition = A + B ;
	Substraction = A - B ;
	Multiplication = A * B ;
	Division = A / B ;
    Modulo= A % B;
	printf("\nA+B= %d", Addition);
	printf("\nA-B= %d", Substraction);
	printf("\nA*B= %d", Multiplication);
	printf("\nA/B= %.2f", Division);
	printf("\nA%B= %f", Modulo);
}