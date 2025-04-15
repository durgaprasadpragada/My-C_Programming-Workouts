#include<stdio.h>
int LSearch(int arr[],int size,int target)
{
	for(int i=0;i<size;i++)
	{
	if(arr[i]==target)
	    return i;
	}
	return -1;
}
int main()
{
	int arr[]={3,5,7,9,67,54,34,23,79};
	int n=sizeof(arr)/sizeof(arr[0]);
	int key;
	printf("Enter the target element: ");
	scanf("%d",&key);
	int res=LSearch(arr,n,key);
	if(res==-1)
	    printf("Element not found");
	else
	    printf("Element found at %d",res);
}
