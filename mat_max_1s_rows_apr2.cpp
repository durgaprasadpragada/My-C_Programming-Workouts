#include<stdio.h>
int main()
{
	int m[4][4]={{0,0,0,1},{0,1,1,1},{0,0,0,0},{1,1,1,1}};
	int max_row_index=-1;
	int j=3;
	for(int i=0;i<4;i++)
	{
		while(j>=0 && m[i][j]==1)
		{
			j--;
			max_row_index=i;
		}
	}
	printf("Row containing Max 1's is: %d",max_row_index);
	
}

