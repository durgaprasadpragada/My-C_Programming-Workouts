#include<stdio.h>
int main()
{
	int a[]={1,3,2,6,4,5};
	int k=2,sum=0;
	for(int i=0;i<k;i++)
	    sum+=a[i];
	for(int i=k;i<6;i++)
	    sum+=a[i]-a[i-k];
	printf("%d",sum);
}
