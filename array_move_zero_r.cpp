#include<Stdio.h>
int main()
{
	int arr[]={1,4,0,2,5,3,0};
	int size=sizeof(arr)/sizeof(arr[0]);
	int l=0;
	int r=size-1;
	while(l<r)
	{
		if(arr[l]==0)
		{
			int temp=arr[l];
			arr[l]=arr[r];
			arr[r]=temp;
			l--;
			r--;
		}
		l++;
	}
	for(int i=0;i<size;i++)
	    printf("%d",arr[i]);
	
	
}
