#include<stdio.h>
#include<string.h>
int main()
{
	char arr[]="hello world";
	int n=strlen(arr);
	int c[256]={0};
	for(int i=0;i<n;i++)
	{
		c[(int)(arr[i])]++;
	}
	for(int i=0;i<256;i++)
	{
		if(c[i]>1)
		{
			printf("%c is repeated %d times\n",i,c[i]);
		}
	}
}
