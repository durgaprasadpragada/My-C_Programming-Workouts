#include<stdio.h>
int main()
{
	int m[4][4]={{0,0,0,1},{0,1,1,1},{0,0,1,1},{1,1,1,1}};
	int maxrow=-1;
	int maxcount=0;
	for(int i=0;i<4;i++)
	{
		int c=0;
		for(int j=0;j<4;j++)
		{
			if(m[i][j]==1)
			    c++;
		}
		if(c>maxcount)
		{
			maxcount=c;
			maxrow=i;
		}
	}
	if(maxrow==-1)
	    printf("No Max 1's in Rows");
	else
	    printf("Max 1's are in %d Row",maxrow+1);
}
