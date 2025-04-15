#include<stdio.h>
int main()
{
	int arr[]={10,20,30,40,50};
	int size=sizeof(arr)/sizeof(arr[0]);
	int k=3;
	int ms=arr[0];
	for(int i=0;i<=size-k;i++)
	{
		int cs=0;
	    for(int j=i;j<i+k;j++)
	        cs=cs+arr[j];
	    if(ms<cs)
	        ms=cs;
    }
    printf("%d",ms);
    return 0;
}
