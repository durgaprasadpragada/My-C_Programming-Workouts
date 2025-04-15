#include<stdio.h>
int main()
{
	int i,j;
	printf("Enter the row value: ");
	scanf("%d",&i);
	printf("Enter the column value: ");
	scanf("%d",&j);
	int matrix[i][j];
	printf("Enter the elements: ");
	for(int row=0;row<i;row++)
	{
		for(int col=0;col<j;col++)
		{
			scanf("%d",&matrix[row][col]);
		}
	}
	
	for(int row=0;row<i;row++)
	{
		for(int col=0;col<j;col++)
		{
			printf("%d ",matrix[row][col]);
		}
	printf("\n");
	}
}

