#include<stdio.h>
void display(int arr[],int size)
{
	for(int i=0;i<size;i++)
	{
		printf("%d ",arr[i]);
	}
}
void Insertion_sort(int arr[],int size)
{
	for(int i=1;i<size;i++)
	{
		int current_ele=arr[i];
		int pos=i;
		while(pos>0 && current_ele<arr[pos-1])
		{
			arr[pos]=arr[pos-1];
			pos=pos-1;
		}
		arr[pos]=current_ele;
	}
}
int main()
{
	int m[]={70,80,10,30,20};
	int size=sizeof(m)/sizeof(m[0]);
	printf("Input Array: \n");
	display(m,size);
	Insertion_sort(m,size);
	printf("\nAfter sort: \n");
	display(m,size);
	return 0;
}
