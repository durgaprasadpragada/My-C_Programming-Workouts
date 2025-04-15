#include<stdio.h>
int add(int a,int b)
{
	return a+b;
}
int main()
{
	int x,y;
	printf("Enter the two numbers: ");
	scanf("%d%d",&x,&y);
	int sum;
	sum=add(x,y);
	printf("The sum is: %d",sum);
	return 0;
}
