#include<stdio.h>
#include<string.h>
int main()
{
	int arr[]={1,2,3,4,5,7,8,9,10};
	int n=10;
	int sum;
	sum=n*(n+1)/2;
	int missed=0;
	for(int i=0;i<n;i++)
	    missed+=arr[i];
	printf("missed number= %d",sum-missed);
}

