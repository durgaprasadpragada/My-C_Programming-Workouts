#include<stdio.h>
int main()
{
	int matrix[3][3]={{10,20,30},{40,50,60},{70,80,90}};
	printf("%d\n",matrix[0][1]);
	for(int i=0;i<3;i++)
	{
	    for(int j=0;j<3;j++)
	        printf("%d\t",matrix[i][j]);
	    printf("\n");
	}
}
