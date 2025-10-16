
#include<stdio.h>
int main()
{
	int x,y,z,max;
	printf("Please Enter the value of the First Number:\t");
	scanf("%d", &x);
	printf("\nPlease Enter the value of the Second Number:\t");
	scanf("%d", &y);
	printf("\nPlease Enter the value of the Third Number:\t");
	scanf("%d", &z);
	
	max = (x>y)? ((x>z)? x:z) : ((y>z)? y:z);
	printf("\nThe Largest number is %d.", max);
	
	return 0;
}

