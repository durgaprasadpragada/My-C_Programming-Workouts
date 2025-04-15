#include<stdio.h>
void swap(int arr[],int n,int m)
{
	int left=m+1;
	int right=n-1;
	while(left<right)
	{
		int temp=arr[left];
		arr[left]=arr[right];
		arr[right]=temp;
		left++;
		right--;
	}
	for(int i=0;i<n;i++)
	    printf("%d ",arr[i]);
}
int main()
{
	int arr[]={10,4,5,2,3,6,1,3,6};
	int m;
	scanf("%d",&m);
	int n=sizeof(arr)/sizeof(arr[0]);
	swap(arr,n,m);
}

