#include<stdio.h>
int main()
{
	int arr[]={1,2,3,4,5};
	int size=sizeof(arr)/sizeof(arr[0]);
	int *lt,*rt;
	lt=&arr[0];
	rt=&arr[size-1];
	while(lt<rt)
	{
		a=&lt;
		b=&rt;
		int temp=*a;
		*a=*b;
		*b=temp
		lt++;
		rt--;
	}
	for(int i=0;i<size;i++)
	    printf("%d ",arr[i]);
	return 0;
}
