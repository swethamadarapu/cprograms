#include<stdio.h>
#include<stdlib.h>
struct node 
{
	int data;
	struct node *next;
	struct node *prev;
};
void insert (struct node **);
void display(struct node **);
int main()
{
	struct node *head = NULL;
	int choice;
	printf("enter your choice: 1. insert  2.display");
	scanf("%d",&choice);
	if(choice == 1)
		insert(&head);
	else if(choice == 2)
		display(&head);
	else
		exit(0);



}

void insert(struct node **ptr)
{
	struct node *newnode = malloc (sizeof(struct node));
	int prev;
	printf("enter data:");
	scanf("%d",&(newnode->data));
	newnode->next=*ptr;
	newnode->prev=NULL;
	if(*ptr != NULL)
		(*ptr)=newnode;
}
void display(struct node **ptr)
{
	struct node *newnode = NULL;
	while(newnode = NULL)
	{
		printf("node: %d\n",newnode->data);
		newnode=newnode->next;

	}
}
		

