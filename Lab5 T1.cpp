#include<stdio.h> 
int main() 
{ 
int a, b; 

//Equation= a+b*(a-b)/2 
printf("Enter the first Number:\t"); 
scanf("%d", &a); 

printf("Enter the second Number:\t"); 
scanf("%d", &b);
 
printf("\nThe first statement is (a-b):\t%d",a-b); 
printf("\nThe second statement is (a-b)/2:\t%d", a-b/2); 
printf("\nThe third statement is b*(a-b)/2:\t%d", b*(a-b)/2); 
printf("\nThe fourth statement is a+b*(a-b)/2:\t%d", a+b*(a-b)/2); 

return 0;   

} 