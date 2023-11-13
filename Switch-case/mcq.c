#include<stdio.h>

main()
{
	char ans;
	int result = 0;
	
	printf("1)who is national animal\n");
	printf("A. tiger\n");
	printf("B. lion\n");
	printf("C. leapord\n");
	printf("D. dear\n");
	
	printf("enter your answer:");
	scanf(" %c",&ans);
	
	switch(ans)
	{
		case'A':printf("wrong answer\n");
		break;
		case'B':printf("right answer\n");
		result++;
		break;
		case'C':printf("wrong answer\n");
		break;
		case'D':printf("wrong answer\n");
		break;
		default:printf("enter valid answer(A,B,C,D)\n\n");
	}
	
	printf("\n2)which is national flower\n");
	printf("A. lotas\n");
	printf("B. rose\n");
	printf("C. jasmin\n");
	printf("D. sunflower\n");
	
	printf("enter your answer:");
	scanf(" %c",&ans);
	
	switch(ans)
	{
		case'A':printf("right answer\n");
		result++;
		break;
		case'B':printf("wrong answer\n");
		break;
		case'C':printf("wrong answe\n");
		break;
		case'D':printf("wrong answer\n");
		break;
		default:printf("enter valid answer(A,B,C,D)\n\n");
	}
	
	printf("\n3)which is national language\n");
	printf("A. marathi\n");
	printf("B. gujarati\n");
	printf("C. english\n");
	printf("D. hindi\n");
	
	printf("enter your answer:");
	scanf(" %c",&ans);
	
	switch(ans)
	{
		case'A':printf("wrong answer.\n");
		break;
		case'B':printf("wrong answer.\n");
		break;
		case'C':printf("wrong answer.\n");
		break;
		case'D':printf("right answer.\n");
		result++;
		break;
		default:printf("enter valid answer(A,B,C,D).\n\n");
	}
	
	printf("\n4)which is national tree\n");
	printf("A. Papaya Tree\n");
	printf("B. sandalwood Tree\n");
	printf("C. banyan tree\n");
	printf("D. bony Tree\n");
	
	printf("enter your answer:");
	scanf(" %c",&ans);
	
	switch(ans)
	{
		case'A':printf("wrong answer.\n");
		break;
		case'B':printf("wrong answer.\n");
		break;
		case'C':printf("right answer.\n");
		result++;
		break;
		case'D':printf("wrong answer.\n");
		break;
		default:printf("enter valid answer(A,B,C,D).\n\n");
	}
	
	printf("\n5)how many union territories are there in india\n");
	printf("A. 8\n");
	printf("B. 7\n");
	printf("C. 6\n");
	printf("D. 9\n");
	
	printf("enter your answer:");
	scanf(" %c",&ans);
	
	switch(ans)
	{
		case'A':printf("right answer.\n");
		result++;
		break;
		case'B':printf("wrong answer.\n");
		break;
		case'C':printf("wrong answer.\n");
		break;
		case'D':printf("wrong answer.\n");
		break;
		default:printf("enter valid answer(A,B,C,D).\n\n");
	}
	
	printf("\n6)how many states in india\n");
	printf("A. 27\n");
	printf("B. 28\n");
	printf("C. 26\n");
	printf("D. 29\n");
	
	printf("enter your answer:");
	scanf(" %c",&ans);
	
	switch(ans)
	{
		case'A':printf("wrong answer.\n");
		break;
		case'B':printf("right answer.\n");
		result++;
		break;
		case'C':printf("wrong answer.\n");
		break;
		case'D':printf("wrong answer.\n");
		break;
		default:printf("enter valid answer(A,B,C,D).\n\n");
	}
	
	printf("\n7)how many country in world\n");
	printf("A. 194\n");
	printf("B. 197\n");
	printf("C. 195\n");
	printf("D. 199\n");
	
	printf("enter your answer:");
	scanf(" %c",&ans);
	
	switch(ans)
	{
		case'A':printf("wrong answer.\n");
		break;
		case'B':printf("wrong answer.\n");
		break;
		case'C':printf("right answer.\n");
		result++;
		break;
		case'D':printf("wrong answer.\n");
		break;
		default:printf("enter valid answer(A,B,C,D).\n\n");
	}
	
	printf("\n8)how many district in gujarat\n");
	printf("A. 38\n");
	printf("B. 32\n");
	printf("C. 36\n");
	printf("D. 33\n");
	
	printf("enter your answer:");
	scanf(" %c",&ans);
	
	switch(ans)
	{
		case'A':printf("wrong answer.\n");
		break;
		case'B':printf("wrong answer.\n");
		break;
		case'C':printf("wrong answer.\n");
		break;
		case'D':printf("right answer.\n");
		result++;
		break;
		default:printf("enter valid answer(A,B,C,D).\n\n");
	}
	
	printf("\n9)how many district in india\n");
	printf("A. 765\n");
	printf("B. 766\n");
	printf("C. 764\n");
	printf("D. 763\n");
	
	printf("enter your answer:");
	scanf(" %c",&ans);
	
	switch(ans)
	{
		case'A':printf("wrong answer.\n");
		break;
		case'B':printf("right answer.\n");
		result++;
		break;
		case'C':printf("wrong answer.\n");
		break;
		case'D':printf("wrong answer.\n");
		break;
		default:printf("enter valid answer(A,B,C,D).\n\n");
	}
	
	printf("\n10)who is chief minister of gujarat\n");
	printf("A. bhupendra patel\n");
	printf("B. rahul tripathi\n");
	printf("C. rahul  gandhi\n");
	printf("D. hiren patel\n");
	
	printf("enter your answer:");
	scanf(" %c",&ans);
	
	switch(ans)
	{
		case'A':printf("right answer.\n");
		result++;
		break;
		case'B':printf("wrong answer.\n");
		break;
		case'C':printf("wrong answer.\n");
		break;
		case'D':printf("wrong answer.\n");
		break;
		default:printf("enter valid answer(A,B,C,D).\n\n");
	}
	
	printf("your result is %d/10" , result);
	
	
}
