#include<Stdio.h>
int main()
{
	int arr[]={10,20,30,40,50};
	int size=sizeof(arr)/sizeof(arr[0]);
	int k=3;
	for(int i=0;i<=size;i++)
	{
		for(int j=i;j<size;j++)
		{
			printf("{");
			for(int z=i;z<=j;z++)
			{
			    printf(" %d ",arr[z]);
			}
			printf("}\t");
	    }
		printf("\n");
	}
	return 0;
}
