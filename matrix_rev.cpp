#include<stdio.h>
int main()
{
	int rows=3,cols=3;
	int matrix[rows][cols]={{20,40,60},{15,30,45},{66,77,88}};
	printf("Original matrix: \n");
	for(int i=0;i<rows;i++)
	{
		for(int j=0;j<cols;j++)
		{
			printf("%d ",matrix[i][j]);
		}
		printf("\n");
	}
	
	for(int i=0;i<rows;i++)
	{
		for(int j=0,k=cols-1;j<k;j++,k--)
		{
			int temp=matrix[i][j];
			matrix[i][j]=matrix[i][k];
			matrix[i][k]=temp;
		}
	}
	printf("\nReversed matrix: \n");
	for(int i=0;i<rows;i++)
	{
		for(int j=0;j<cols;j++)
		{
			printf("%d ",matrix[i][j]);
		}
		printf("\n");
	}
}
