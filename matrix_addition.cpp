#include<stdio.h>
int main()
{
	int mat1[3][3]={{2,2,2},{3,3,3},{4,4,4}};
	int mat2[3][3]={{4,4,4},{3,3,3},{2,2,2}};
	int res[3][3];
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			res[i][j]=mat1[i][j]+mat2[i][j];
		}
	}
	
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			printf("%d ",res[i][j]);
		}
	printf("\n");
	}
}
