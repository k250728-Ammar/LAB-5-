
#include <stdio.h>
int main() 
{
    int a, b;
    printf("Please Enter the first number:\t");
	scanf("%d", &a);
	printf("\nPlease Enter the second number:\t");
	scanf("%d", &b);
	
    printf("a & b =\t %d\n", a & b);                  
    
    printf("a | b =\t %d\n", a | b);                
    
	printf("a ^ b =\t %d\n", a ^ b);              
    
	printf("~a =\t %d\n", ~a);                  
    
	printf("a << 1 =\t %d\n", a << 1);          
    
	printf("a >> 1 =\t %d\n", a >> 1);        
    
    return 0;
}


