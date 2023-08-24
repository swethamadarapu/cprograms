#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *link;
};

void insert(struct node **head)
{
	struct node *temp = (struct node *)malloc(sizeof(struct node));
	printf("Enter data to be insert : ");
	scanf("%d",&temp->data);
	temp->link = NULL;
	if(*head == NULL)
		*head = temp;	
	else
		(*head)->link=temp;
	return;
}

void display(struct node **head)
{
	struct node *temp = *head;
	while(temp!=NULL)
	{
		printf("node = %d\n",temp->data);
		temp=	temp->link;

	}
	return;
}
