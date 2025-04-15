#include<stdio.h>
void Selection_sort(int arr[],int n)
{
	for(int i=0;i<n-1;i++)
	{
		int min_ind=i;
		for(int j=i+1;j<n;j++)
		{
			if(arr[min_ind]>arr[j])
			{
				min_ind=j;
			}
		}
		int temp=arr[i];
		arr[i]=arr[min_ind];
		arr[min_ind]=temp;
	}
}
void display(int arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
}
int main()
{
	int m[]={7,3,5,1,10,6,9,2,19,15,13,11,17,15,10};
	int size=sizeof(m)/sizeof(m[0]);
	Selection_sort(m,size);
	display(m,size);
}
