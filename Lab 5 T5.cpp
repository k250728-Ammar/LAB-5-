
#include<stdio.h>
int main() 
{
	int coursenum;
	char grade;	
	printf("Please Enter The Course Number:\n1)Calculus\n2)AP\n3)PF\n");
	scanf("%d", &coursenum);
	
	switch (coursenum)
	{
	case 1:		
		printf("\nPlease Enter Your Grade between A to F:\t");
		scanf(" %c", &grade);
			switch (grade)
		{
			case 'A':
			case 'a':
				printf("Your grade is great in Calculus!");
			break;
			case 'B':
			case 'b':
				printf("Your grade is good in Calculus!");
			break;
			case 'C':
			case 'c':
				printf("Your grade is Satisfactory in Calculus!");
			break;
			case 'D':
			case 'd':
				printf("Your need to improve your Calculus grade!");
			break;
			case 'F':
			case 'f':
				printf("You have failed in your Calculus Course!");
			break;
			
			default:
				printf("Invalid Grade Entered!");	
		}
		break;
		
		case 2:		
		printf("\nPlease Enter Your Grade between A to F:\t");
		scanf(" %c", &grade);
			switch (grade)
		{
			case 'A':
			case 'a':
				printf("Your grade is great in AP!");
			break;
			case 'B':
			case 'b':
				printf("Your grade is good in AP!");
			break;
			case 'C':
			case 'c':
				printf("Your grade is satisfactory in AP!");
			break;
			case 'D':
			case 'd':
				printf("You need to improve your AP grade!");
			break;
			case 'F':
			case 'f':
				printf("You have failed in your AP course!");
			break;
			
			default:
				printf("Invalid Grade Entered!");	
		}
		break;
		
		case 3:		
		printf("\nPlease Enter Your Grade between A to F:\t");
		scanf(" %c", &grade);
			switch (grade)
		{
			case 'A':
			case 'a':
				printf("Your grade is great in PF!");
			break;
			case 'B':
			case 'b':
				printf("Your grade is good in PF!");
			break;
			case 'C':
			case 'c':
				printf("Your grade is satisfactory in PF!");
			break;
			case 'D':
			case 'd':
				printf("You need to improve your PF grade!");
			break;
			case 'F':
			case 'f':
				printf("You have failed in your PF course!");
			break;
			
			default:
				printf("Invalid Grade Entered!");	
		}
		break;
		
		default:
			printf("Wrong Course Number Entered!");
		break;
	}
	return 0;
}

