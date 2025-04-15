#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node *link;
};
int main()
{
	struct node *head=(struct node*)malloc(sizeof(struct node));
	head->link=NULL;
	head->data=10;
	struct node *current=(struct node*)malloc(sizeof(struct node));
	current->link=NULL;
	current->data=20;
	head->link=current;
	printf("%d",head->data);
	return 0;
}
