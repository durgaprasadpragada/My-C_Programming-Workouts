#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
struct node *head=NULL;
struct node *newnode,*ptr1,*p1,*ptr;
void create();
void traverse();
void insbeg();
void insend();
void insbef();
void insaft();
void delbeg();
void delend();
void delbef();
void delaft();

int main()
{
	int ch;
	while(1)
	{
	printf("1. create");
	printf("\n2. traverse");
	printf("\n3. insert begin");
	printf("\n4. insert end");
	printf("\n5. insert before");
	printf("\n6. insert after");
	printf("\n7. delete after");
	printf("\n8. delete before");
	printf("\n9. delete begin");
	printf("\n10. delete end");
	printf("\n11. exit");
	printf("\nenter the choice: ");
	scanf("%d",&ch);
	switch(ch)
		{
			case 1: create();
			break; 
			case 2: traverse();
			break;
			case 3: insbeg();
			break;
			case 4: insend();
			break; 
			case 5: insbef();
			break;
			case 6: insaft();
			break;
			case 7: delaft();
			break;
			case 8: delbef();
			break;
			case 9: delbeg();
			break;
			case 10: delend();
			break;
			case 11: exit(0);
			default: printf("Invalid choice!\n");
	    }
    }
}
	void create()
	{
		struct node *newnode,*ptr1;
		int i,n;
		printf("enter no. of nodes:");
		scanf("%d",&n);
		for(i=0;i<n;i++)
		{
			newnode=(struct node*)malloc(sizeof(struct node));
			printf("enter data: ");
			scanf("%d",&newnode->data);
			newnode->next=NULL;
			if(head==NULL)
			    head=newnode;
			else
			{
			    ptr1=head;
			    while(ptr1->next!=NULL)
			        ptr1=ptr1->next;
			    ptr1->next=newnode;
		    }
		}
	}
	void traverse()
	{
		struct node *ptr1=head;
		while(ptr1!=NULL)
		{
			printf("%d\t",ptr1->data);
			ptr1=ptr1->next;
		}
	}
	void insbeg()
	{
		newnode=(struct node*)malloc(sizeof(struct node));
		printf("Enter the Data: ");
		scanf("%d",&newnode->data);
		newnode->next=head;
		head=newnode;
	}
	void insend()
	{
		struct node *ptr1;
		newnode=(struct node *)malloc(sizeof(struct node));
		printf("Enter the data: ");
		scanf("%d",newnode->data);
		newnode->next=NULL;
		ptr1=head;
		while(ptr1->next!=NULL)
			ptr1=ptr->next;
		ptr1->next=newnode;
	}
	void insbef()
	{
		int ele;
		struct node *newnode,*p1,*ptr1;
		printf("Enter the element: ");
		scanf("%d",&ele);
		newnode=(struct node*)malloc(sizeof(struct node));
		printf("Enter the data: ");
		scanf("%d",&newnode->data);
		ptr1=head;
		while(ptr1->data!=ele)
		{
			p1=ptr1;
		    ptr1=ptr1->next;
	    }
	    p1->next=newnode;
	    newnode->next=ptr1;
	}
	void insaft()
	{
		int ele;
		printf("enter the element: ");
		scanf("%d",&ele);
		newnode=(struct node*)malloc(sizeof(struct node));
		printf("Enter the data: ");
		scanf("%d",&newnode->data);
		newnode->next=NULL;
		ptr1=head;
		while(ptr1->data!=ele)
		{
			ptr1=ptr1->next;
		}
		newnode->next=ptr1->next;
		ptr1->next=newnode;
	}
	void delbeg()
	{
		ptr1=head;
		head=ptr1->next;
		free(ptr1);
	}
	void delend()
	{
		struct node *ptr1;
		ptr1=head;
		while(ptr1->next->next!=NULL)
		    ptr1=ptr1->next;
		ptr1->next=NULL;
	}
	void delbef()
	{
		int ele;
		printf("Enter the element: ");
		scanf("%d",&ele);
		ptr1=head;
		while(ptr1->next->data!=ele)
	    {
	    	p1=ptr1;
	    	ptr1=ptr1->next;
		}
		p1->next=ptr1->next;
	}
	void delaft()
	{
		int ele;
		printf("Enter the element: ");
		scanf("%d",&ele);
		ptr1=head;
		while(ptr1->data!=ele)
		{
			p1=ptr1;
		    ptr1=ptr1->next;
		}
		p1=ptr1;
		ptr1=ptr1->next;
		p1->next=ptr->next;
		free(ptr1);
	}
