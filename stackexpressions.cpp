#include<stdio.h>
char a[10];
int max=10,top=-1,i,c,stk[10],n;
void push();
int pop();
void pushp();
int peek();
int main()
{
	int j,p,e=1,op1,op2;
	printf("Enter any expression: ");
	scanf("%s",a);
	for(i=0;a[i];i++)
	{
	if(a[i]=='^'||a[i]=='*'||a[i]=='/'||a[i]=='+'||a[i]=='-')
		{
			op2=pop();
			op1=pop();
			switch(a[i])
			{
				case '^':for(j=1;j<=op2;j++)
					    {
						e*=op1;
					    }
						c=e;
						break;
				case '*':c=op1*op2;
						break;
				case '/':c=op1/op2;
						break;
				case '+':c=op1+op2;
						break;
				case '-':c=op1-op2;
						break;
			}
	pushp();
		}
	else
	{
		n=a[i]-'0';
		push();
	}

}
		p=peek();
		printf("%d",p);
}
void push()
{
	if(top==max-1)
	printf("Stack overflow");
	else
	{
		top++;
		stk[top]=n;
	}
}
int pop()
{
	int ch;
	if(top==-1)
		printf("Stack underflow");
	else
	{
		ch=stk[top];
		top--;
	}
return ch;
}
void pushp()
{
	if(top==max-1)
		printf("Stack overflow");
	else
	{
		top++;
		stk[top]=c;
	}
}
int peek()
{
	int ch;
	if(top==-1)
		printf("Stack underflow");
	else
		ch=stk[top];
		return ch;
}
