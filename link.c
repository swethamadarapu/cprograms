
#include"linkfun.c"
void main() 
{
	struct node *head=NULL;
	int choice;
	while(1)
	{

		printf("Enter 1.insert  2.display : ");
		scanf("%d",&choice);
		
		if(choice == 1)
			insert(&head);
		else if(choice == 2)
			display(&head);
		else
			exit(0);
	}
}





