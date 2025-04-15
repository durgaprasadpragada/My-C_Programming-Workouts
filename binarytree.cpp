#include<stdio.h>
int a[20],n,i,index;
void create();
void insert();
int main()
{
	int ch;
	while(1)
	{
		printf("\n1.create");
		printf("\n2.insert");
		printf("\n3.inorder");
		printf("\n4.preorder");
		printf("\n5.post order");
		printf("\n6.left_sib");
		printf("\n7.right_sib");
		printf("\n8.parent");
		printf("\n9.search");
		printf("\n10.delete");
		printf("\n11.display");
		printf("\n12.exit");
		printf("enter the choice: ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: crt();
			break;
			case 2: insert();
			break;
			case 3: inorder();
			break();
			case 4: preorder();
			break;
			case 5:postoreder();
			break;
			case 6:leftsib();
			break;
			case 7:rightsib();
			break;
			case 8:parent();
			break;
			case 9:search();
			break;
			case 10:delete();
			break;
			case 11:display();
			break;
			case 12: exit(0);
		}
		
	}
}
crt()
{
	int i;
	printf("enter n: ");
	scanf("%d",&n);
	printf("enter elements: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	display();
}
insert()
{
	int val,parent,pos;
	printf("enter value: ");
	scanf("%d",&val);
	printf("enter parent node: ");
	scanf("%d",&parent);
	printf("enter 1 for left or 2 for right");
	scanf("%d",&pos);
	for(i=0;i<n;i++)
	{
		if(a[i]==parent)
		    break;
	}
	if((a[2*i+1]!=0)&&(pos==1)||(a[2*i+2]!=0)&&(pos==2))
	{
		printf("already e;ement there, cannot insert");
	}
	else
	{
		n++;
		if(pos==1)
		    a[2*i+1]=val;
		else
		    a[2*i+2]=val;
	printf("inserted");
	}
}

