#include<stdio.h>
int main()
{
	int matrix[3][3]={{20,40,60},{15,30,45},{12,24,36}};
	int temp;
	printf("Original Matrix: \n");
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			printf("%d ",matrix[i][j]);
		}
		printf("\n");
	}
	printf("\nTransposed Matrix: \n");
	for(int i=0;i<3;i++)
	{
		for(int j=i+1;j<3;j++)
		{
			temp=matrix[i][j];
			matrix[i][j]=matrix[j][i];
			matrix[j][i]=temp;
		}
	}
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			printf("%d ",matrix[i][j]);
		}
		printf("\n");
	}
}
