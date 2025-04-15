#include<stdio.h>
int main()
{
	int num,sum=0,digit,temp,rem;
	printf("Enter the number: ");
	scanf("%d",&num);
	temp=num;
	while(num>0)
	{
		digit=num%10;
		rem=digit*digit*digit;
		sum+=rem;
		num=num/10;
	}
	if(sum==temp)
	    printf("ARMSTRONG");
	else
	    printf("NOT ARMSTRONG");
	return 0;
}
