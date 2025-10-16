#include<stdio.h> 
int main()
{ 

int m, n, opr; 

printf("Enter the Number, m:\t"); 
scanf("%d", &m); 

printf("Enter the Number, n:\t"); 
scanf("%d", &n); 

opr=m>n?printf("\n%d is greater than %d",m,n):printf("\n%d is greater than 
%d",n,m); 

return 0; 

}