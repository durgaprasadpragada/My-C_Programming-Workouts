#include<stdio.h>
int main()
{
	int a[5]={34,52,19,9,89};
	int size=sizeof(a)/sizeof(a[0]);
	int max=a[0],min=a[0];
	for(int i=0;i<size;i++)
	{
		if(a[i]>max)
		    max=a[i];
		if(a[i]<min)
		    min=a[i];
	}
	printf("minimum: %d \nmaximum: %d ",min,max);
	return 0;
}
