#include<stdio.h>
int main()
{
	int marks;
	printf("enter your marks");
	scanf("%d",&marks);
	if (marks>90)
	{
		printf("get A grade");
	}
	else if(marks>80)
	{
	printf("get B grade");
	}
	else if(marks>70)
	{	
	printf("get C grade");
	}
	else if(marks>60)
	{
		printf("get D grade");
	}
	else 
	{
		printf("fail");
	}
	return 0;
}