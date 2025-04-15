#include<stdio.h>
int main()
{
	int arr[]={1,8,23,5,29,65,93,44,50};
	int size=sizeof(arr)/sizeof(arr[0]);
	int target;
	printf("Enter the target: ");
	scanf("%d",&target);
	int flag=0;
	for(int i=0;i<size;i++)
	{
		if(arr[i]==target)
		{
		    flag=1;
		    break;
	    }
	}
	if(flag)
	    printf("Element Found");
	else
	    printf("Element not Found");
	return 0;
}
