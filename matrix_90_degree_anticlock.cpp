/* 90 degree clockwise rotation
----original matrix input
----transpose
----reverse of rows
----print org--and--90 deg colckwose rotation */
#include<stdio.h>
int main()
{
	int rows,cols;
	printf("Enter row size: \n");
	scanf("%d",&rows);
	printf("\nEnter col size: \n");
	scanf("%d",&cols);
	int matrix[rows][cols];
	printf("Enter the array elemetns: \n");
	for(int i=0;i<rows;i++)
	{
		for(int j=0;j<cols;j++)
		{
			scanf("%d",&matrix[i][j]);
		}
	}
	printf("Original Matrix: \n");
	for(int i=0;i<rows;i++)
	{
		for(int j=0;j<cols;j++)
		{
			printf("%d ",matrix[i][j]);
		}
		printf("\n");
	}
	printf("");
	for(int j=0;j<cols;j++)
	{
		for(int i=0,k=rows-1;i<k;i++,k--)
		{
			int temp=matrix[i][j];
			matrix[i][j]=matrix[k][j];
			matrix[k][j]=temp;
		}
	}
	printf("Original Matrix: \n");
	for(int i=0;i<rows;i++)
	{
		for(int j=0;j<cols;j++)
		{
			printf("%d ",matrix[i][j]);
		}
		printf("\n");
	}
}
