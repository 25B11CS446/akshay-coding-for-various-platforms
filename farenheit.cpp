#include<stdio.h>
int main()
{
	float celsius , farenheit;
	printf("enter temp in farenheit:");
	scanf("%f", &farenheit);
	farenheit=(farenheit-32) /1.8;
	printf("temperature in celsius: %2f",celsius);
	return 0;
}