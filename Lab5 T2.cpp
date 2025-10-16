int main() 
{ 

int x, y, op1, op2, op3; 

printf("Enter the Number, X:\t"); 
scanf("%d", &x); 

printf("Enter the Number, Y:\t"); 
scanf("%d", &y); 

op1=(x>5) && (y<10); 
op2=(x==10) || (y==5); 
op3=!(x==y); 

printf("\nThe result of first condition is:\t%d", op1); 
printf("\nThe result of second condition is:\t%d", op2); 
printf("\nThe result of third condition is:\t%d", op3); 

return 0; 

} 
