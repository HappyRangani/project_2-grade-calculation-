#include<stdio.h>

main()
{
	int score;
	
	printf("Enter your score = ");
	scanf("%d",&score);
	
	switch(score)
	{
		case 90 ... 100:
			             printf("Your grade is A . Excellent work");
			             break;
		case 80 ... 89:
			             printf("Your grade is B . Well done");
			             break;
		case 70 ... 79:
			             printf("Your grade is C . Good job");
			             break;
		case 60 ... 69:
			             printf("Your grade is D . You passed but need improvment");
			             break;
		case 46 ... 59:
			             printf("Your grade is E . Do hard work");
			             break;
		case 40 ... 45:
			             printf("Your grade is F . You are failed ");
			             break;
			             
		default:
		        printf("Enter valid score");
				break;	             
	}
}