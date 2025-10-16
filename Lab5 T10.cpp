
#include<stdio.h>
int main()
{
	int x, y, z;
	
	printf("Please Enter the first number:\t");
	scanf("%d", &x);
	
	printf("\nPlease Enter the second number:\t");
	scanf("%d", &y);	
	
	printf("\nPlease Enter the third number:\t");
	scanf("%d", &z);
	
	if(x>y)
	{
		if(x>z)
		{
			printf("The greatest number is %d", x);
		}
		else 
		{
			printf("The greatest number is %d", z);
		}
	}
	
	else
	{
		if(y>z)
		{
			printf("The greatest number is %d", y);
		}
		else
		{
			printf("The greatest number is %d", z);
		}	
	}
	return 0;
}

