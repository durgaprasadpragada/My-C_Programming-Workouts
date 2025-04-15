#include<stdio.h>
int main()
{
	int source[5]={14,13,12,11,10};
	int target[5];
	for(int i=0;i<5;i++)
	{
		target[i]=source[i];
		printf(" %d ",target[i]);
	}
	return 0;
}

