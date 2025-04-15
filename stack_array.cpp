#include<stdio.h>
#include<stdlib.h>
int st[100],top=-1,max=100;
void push(); 
int isfull(); 
void pop(); 
int isempty(); 
void peek(); 
void display();
main()
{
	int ch;
	while(1)
	{
		printf("\n1.push");
		printf("\n2.pop");
		printf("\n3.peek");
		printf("\n4.display");
		printf("\n5.exit\n");
		printf("enter the choice: ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: push();
			        break;
			case 2: pop();
			        break;
			case 3: peek();
			        break;
			case 4: display();
			        break;
			case 5: exit(0);
			default: printf("....invalid input....\n");
			break;
		}
		
	}
}
void push()
{
	int check,v;
	check=isfull();
	if(check==1)
	    printf("stack is full(overflow)");
	else
	{
		printf("Enter the element: ");
		scanf("%d",&v);
		top=top+1;
		st[top]=v;
		printf("successfully inserted");
	}
}
int isfull()
{
	if(top==(max-1))
	    return 1;
	else 
	    return 0;
}
void pop()
{
	int check,v;
	check=isempty();
	if(check==1)
	    printf("stcak is empty");
	else 
	{
		v=st[top];
		top=top-1;
		printf("%d is popped out\n",v);
	}
}
isempty()
{
	if(top==-1)
	    return 1;
	else
	    return 0;
}
void peek()
{
	int check;
	check=isempty();
	if(check==1)
	    printf("stack is empty");
	else
	{
		printf("%d is top element",st[top]);
	}
}
void display()
{
	if(isempty())
	    printf("stack is empty\n");
	else
	{   
	printf("stack elements: ");
	for(int i=top;i>=0;i--)
	    printf("%d ",st[i]);
	printf("\n");
    }
}
