#include<stdio.h>
int main()
{
	int matrix[3][3]={{20,40,60},{15,30,45},{12,24,36}};
	int res[3][3];
	printf("Original matrix: \n");
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			printf("%d ",matrix[i][j]);
		}
		printf("\n");
	}
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			res[i][j]=matrix[j][i];
		}
	}
	printf("\nTransposed matrix: \n");
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			printf("%d ",res[i][j]);
		}
		printf("\n");
	}
}
