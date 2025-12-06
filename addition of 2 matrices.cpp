#include<stdio.h>
int main()
{
	int arr1[50][50],brr1[50][50],crr1[50][50],i,j,n;
	printf("Addition of two matrices:\n");
	printf("Input the size of the square matrix :");
	scanf("%d",&n);
	 
	 printf("Input elements int the first matrix :\n");
	 for(i=0;i<n;i++)
	 {
	 	for(i=0;j<n;j++)
	 	{
	 		printf("Elements - [%d],[%d] :",i,j);
	 		scanf("%d,&arr1[i][j]");
		}
	}
}