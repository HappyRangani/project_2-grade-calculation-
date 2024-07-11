#include<stdio.h>
/*
GRADE CALCULATION
*/
main()
{
	int score;
	char grade;
	
	printf("Enter your score =");
	scanf("%d",&score);
	
	grade=(score>=100)? 'A' :
	      (score>=80)? 'B' :
	      (score>=60)? 'C' :
	      (score>=40)? 'D' : 'F';
	      
	      printf("Your grade is = %c\n",grade);
		    
}