#include<stdio.h>

main()
{
	char grade;
	
	printf("Enter your grade = ");
	scanf("%c",&grade);
	
	if(grade>='A'&&grade<='D')
	{
		printf("Congratulation! You are eligible for next level.\n");
	}
	else if (grade<='F')
	{
		printf("Please try next time.\n");
	}
	else
	{
		printf("Invalid grade. Please enter valid grade");
	}
}