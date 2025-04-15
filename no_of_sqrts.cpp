#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	printf("Enter the number: ");
	scanf("%d",&n);
	float res=sqrt(n-1);
	printf("The no. of perfect squares below %d are: %d",n,(int)res);
}
