#include<stdio.h>
void rev_arr(int arr[],int size)
{
	int temp;
	int n=(int)size/2;
	for(int i=0;i<n;i++)
	{
		temp=arr[i];
		arr[i]=arr[size-1-i];
		arr[size-1-i]=temp;
	}
}
int main()
{
    int source[5]={45,23,56,78,23};
    int size=sizeof(source)/sizeof(source[0]);
	rev_arr(source,size);
	for(int i=0;i<size;i++)
	    printf("%d ",source[i]);
	return 0;
}

