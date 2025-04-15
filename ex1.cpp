#include<stdio.h>
int main()
{
    int source[5]={14,13,12,11,10};
    int size=sizeof(source)/sizeof(source[0]);
    int temp[size],final[size];
	for(int i=0;i<size;i++)
	{
		temp[i]=source[size-1-i];
	}
	for(int i=0;i<size;i++)
	{
		final[i]=temp[i];
	}
	for(int i=0;i<size;i++)
	    printf("%d ",final[i]);
	return 0;
}

