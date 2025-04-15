#include<stdio.h>
int main()
{
	int a[]={1,2,3,4,5};
	int size=sizeof(a)/sizeof(a[0]);
	int temp;
	int front=0;
	int rear=size-1;
	while(front<rear)
	{
		temp=a[front];
		a[front]=a[rear];
		a[rear]=temp;
		front++;
		rear--;
	}
	for(int i=0;i<size;i++)
	    printf("%d ",a[i]);
	return 0;
}

