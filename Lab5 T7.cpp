#include<stdio.h>
int main()
{
	int remainder,a,b;
	float quotient;
	printf("Please Enter the value of first number:\t");
	scanf("%d", &a);
	printf("\nPlease Enter the value of second number:\t");
	scanf("%d", &b);
	remainder = a%b;
	quotient = a /b;
	
	printf("\nThe sum of the two numbers is %d.", a+b);
	printf("\n\nThe difference of the two numbers is %d", a-b);
	printf("\n\nThe product of the two numbers is %d", a*b);
	printf("\n\nThe quotient of the two numbers is %.2f", quotient);
	printf("\n\nThe remainder of the two numbers is %d", remainder);
	return 0;
}

