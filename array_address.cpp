#include<stdio.h>
int main()
{
	int arr[5]={10,20,30,40,50};
	printf("array first ele address: %d\n",arr);
	printf("array first element: %d\n",*arr);
	printf("next array ele address: %d\n",arr+1);
	printf("array next ele: %d",*(arr+1));
	return 0;
	
}
