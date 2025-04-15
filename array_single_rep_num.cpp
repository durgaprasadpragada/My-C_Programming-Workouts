#include<stdio.h>
int main()
{
	int arr[]={1,2,3,4,5,5,6,7,8,9,10};
	int n=10;
	int totalsum,arrsum=0;
	totalsum=n*(n+1)/2;
	for(int i=0;i<n+1;i++)
	    arrsum+=arr[i];
	printf("Repeated number= %d",arrsum-totalsum);
	    
}
