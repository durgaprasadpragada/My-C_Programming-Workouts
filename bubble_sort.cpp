#include<stdio.h>
void Bubble_sort(int arr[],int size)
{
	for(int i=0;i<size-1;i++)
	{
		for(int j=0;j<size-i-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				int temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
}
void display(int arr[],int size)
{
	for(int i=0;i<size;i++)
	{
		printf("%d ",arr[i]);
	}
}
int main()
{
	int m[]={2,7,4,9,3,5,8,1};
	int size=sizeof(m)/sizeof(m[0]);
	Bubble_sort(m,size);
	display(m,size);
}
