#include<stdio.h>
int main()
{
	int arr[5]={10,20,30,40,50};
	printf("address      element\n");
	for(int i=0;i<5;i++)
	{
		
		printf("%d      %d\n",arr+i,*(arr+i));
	}
	return 0;
}
