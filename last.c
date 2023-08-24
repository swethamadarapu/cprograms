#include<stdio.h>
#include<stdlib.h>

struct ll
{
	int data;
	struct ll *next;
};
void add(struct ll **h,int num)
{	
	struct ll *temp = calloc(sizeof(struct ll),1);
	temp->data = num;
	if(*h == NULL)
		*h = temp;
	else
	{
		struct ll *tra = *h;
		while(tra->next)
			tra = tra->next;
		tra->next  = temp;
	}
}

void display(struct ll **h)
{
	struct ll *temp = *h;
	while(temp)
	{
		printf("%d\n",temp->data);
		temp = temp->next;
	}
}

void printfromlast(struct ll **h)
{

	struct ll *temp = *h;
	if(temp->next)
		printfromlast(&(temp->next));
	printf("data = %d\n",temp->data);
}


int main()
{
	struct ll *p = NULL;
	add(&p,10);
	add(&p,20);
	add(&p,30);
	add(&p,40);
	display(&p);

	printfromlast(&p);

}



