#include<stdio.h>
int main()
{
	int a[]={44,10,5,15,20};
	int size=sizeof(a)/sizeof(a[0]);
	int i,sum=0;
	for(i=0;i<size;i++)
	    sum+=a[i];
	printf("Sum of arr elements is: %d",sum);
	return 0;
}
