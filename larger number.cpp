#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter the num:");
	scanf("%d%d%d",&a,&b,&c);
	if(a>=b)
	{
		if(a>=c)
		printf("%d is larger num",a);
		else
		printf("%d is larger num",c);
	}
	else
	{
		if(b>=c)
		printf("%d is larger num:",b);
		else
		printf("%d is larger num:",c);
	}
	return 0;
}
	