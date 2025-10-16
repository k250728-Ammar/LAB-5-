#include<stdio.h>
int main()
{
	int a, b;
	
	printf("Enter the first number,a:\t");
	scanf("%d", &a);
	printf("\nEnter the second number,b:\t");
	scanf("%d", &b);
	
	if(a==b)
	{
		printf("\na==b\tTRUE");
	}
	else 
	{
		printf("\na==b\tFALSE");
	}

	
	if(a!=b)
	{
		printf("\n\na!=b\tTRUE");
	}
	else 
	{
		printf("\n\na!=b\tFALSE");
	}

	
	if(a>b)
	{
		printf("\n\na>b\tTRUE");
	}
	else 
	{
		printf("\n\na>b\tFALSE");
	}

	
	if(a<b)
	{
		printf("\n\na<b\tTRUE");
	}
	else 
	{
		printf("\n\na<b\tFALSE");
	}
	
	
	if(a>=b)
	{
		printf("\n\na>=b\tTRUE");
	}
	else 
	{
		printf("\n\na>=b\tFALSE");
	}
	
	
	if(a<=b)
	{
		printf("\n\na<=b\tTRUE");
	}
	else 
	{
		printf("\n\na<=b\tFALSE");
	}
	
	return 0;
}
