#include<stdio.h>
void Selection_sort(int arr[],int n)
{
	int swap_count=0;
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
		if(i!=min_ind)
		{
		int temp=arr[i];
		arr[i]=arr[min_ind];
		arr[min_ind]=temp;
		swap_count++;
	    }
	}
	printf("Min swaps: %d\n",swap_count);
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
	int m[]={10, 19, 6, 3, 5};
	int size=sizeof(m)/sizeof(m[0]);
	Selection_sort(m,size);
	display(m,size);
}
