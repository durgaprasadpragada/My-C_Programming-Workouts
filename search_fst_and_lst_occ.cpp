#include<stdio.h>
int main()
{
	int arr[]={34,56,56,56,72,43,43,87,87,87};
	int size=sizeof(arr)/sizeof(arr[0]);
	int key=87;
	int start=-1;
	int end=-1;
	for(int i=0;i<size;i++)
	{
		if(arr[i]==key)
		{
			if(start==-1)
			    start=i;
			else
			    end=i;
		}
	}
	printf("%d %d",start,end);
}
