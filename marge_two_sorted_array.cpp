#include<stdio.h>
void merge_sorted_array(int fst[],int m,int sec[],int n,int res[])
{
	int i=0,j=0,k=0;
	while(i<m && j<n)
	{
		if(fst[i]<sec[j])
			res[k++]=fst[i++];
		else
		    res[k++]=sec[j++];
	}
	while(i<m)
	{
		res[k++]=fst[i++];
	}
	while(j<n)
	{
		res[k++]=sec[j++];
	}
	
}
int main()
{
	int arr1[]={2,5,7,9,13,18};
	int m=sizeof(arr1)/sizeof(arr1[0]);
	int arr2[]={3,6,8,11};
	int n=sizeof(arr2)/sizeof(arr2[0]);
	int res[m+n];
	merge_sorted_array(arr1,m,arr2,n,res);
	for(int i=0;i<m+n;i++)
	{
		printf("%d ",res[i]);
	}	
}
