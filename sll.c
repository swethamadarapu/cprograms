#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *link;
};
void insert_end(struct node **);
void display(struct node **);
void insert_beg(struct node**);
void del_beg(struct node **);
//void del_end(struct node **);
int main()
{
	struct node *head = NULL;
	int choice;
	while(1)
	{
		printf("enter 1.insert at end  2.display  3.insert_beg   4.del_beg: ");
		scanf("%d",&choice);
		if(choice==1)
			insert_end(&head);
		else if(choice == 2)
			display(&head);
		else if(choice == 3)
			insert_beg(&head);
		else if(choice == 4)
			del_beg(&head);
		else
			exit(0);
	}
}

void insert_end(struct node **ptr)
{
	struct node *temp = malloc(sizeof(struct node));
	printf("enter data : ");
	scanf("%d",&(temp->data));
	temp->link = NULL;
	if(*ptr==NULL)
		*ptr = temp;
	else
	{
		struct node *tra = *ptr;
		while(tra->link != NULL)
			tra = tra->link;

		tra->link = temp;
	}
}


void display(struct node **ptr)
{

	struct node *temp = *ptr;
	while(temp != NULL)
	{
		printf("%d\n",temp->data);
		temp = temp->link;
	}
}


void insert_beg(struct node **ptr)
{
	struct node *new = malloc(sizeof(struct node));
	printf("enter data:");
	scanf("%d",&(new->data));
	new -> link = *ptr;
	*ptr = new;
}
void del_beg(struct node **ptr)
{
	struct node *temp = *ptr;
	 *ptr = temp->link;
	 free(temp);
}
/*void del_end(struct node **ptr)
{
	struct node *temp = *ptr;

	temp = tra;
	while(temp -> next != NULL)
	{*/





