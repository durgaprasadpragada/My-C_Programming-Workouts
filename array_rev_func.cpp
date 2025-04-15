#include<stdio.h>
void rev_arr(int arr[],int size)
{
	int result[size];
	for(int i=0;i<size;i++)
	{
		result[i]=arr[size-1-i];
	}
	for(int i=0;i<size;i++)
	    printf("%d ",result[i]);
}
int main()
{
    int source[5]={14,13,12,11,10};
    int size=sizeof(source)/sizeof(source[0]);
	rev_arr(source,size);
	return 0;
}

