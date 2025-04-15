#include<stdio.h>
int main()
{
	int mat[]={5,7,23,34,45,56,67,78,89,99};
	int size=sizeof(mat)/sizeof(mat[0]);
	int target;
	printf("Enter the element to search: ");
	scanf("%d",&target);
	int left=0;
	int right=size-1;
	while(left<=right)
	{
		int mid=left+(right-left)/2;
		if(mat[mid]==target)
		{
		    printf("Found at %d index.",mid);
		    break;
		}
		else if(mat[mid]<target)
		    left=mid+1;
		else
		    right=mid-1;
	}
	
}
