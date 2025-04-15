#include<stdio.h>
int main()
{
	int m[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
	int top=0,bottom=3;
	int left=0,right=3;
	int d=0;
	printf("The matrix is:\n");
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<4;j++)
		{
			printf("%d ",m[i][j]);
		}
		printf("\n");
	}
	printf("Spiral traversal: \n");
	while(left<=right && top<=bottom)
	{
		if(d==0)
		{
			for(int i=left;i<=right;i++)
			    printf("%d ",m[top][i]);
			top++;
		}
		else if(d==1)
		{
			for(int i=top;i<=bottom;i++)
			    printf("%d ",m[i][right]);
			right--;
		}
		else if(d==2)
		{
			if(top<=bottom)
			{
				for(int i=right;i>=left;i--)
				    printf("%d ",m[bottom][i]);
				bottom--;
			}
		}
		else if(d==3)
		{
			if(left<=right)
			{
				for(int i=bottom;i>=top;i--)
				    printf("%d ",m[i][left]);
				left++;
			}
		}
		d=(d+1)%4;
	}
}
