#include<stdio.h>
void add()
{
	int a,b,c;
	printf("Enter the values of a,b:");
	scanf("%d %d",&a,&b);
	c=a+b;
	printf("sum is %d\n",c);
}
int main()
{
	 add();
	return 0;
}