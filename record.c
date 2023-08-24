#include<stdio.h>
#define maxsize 5
void add_record(void);
void del_record(void);
void display_record(void);

struct record{
	char name[10];
	int dob;
}var[10];

int cnt = 0;

int main()
{
	int choice;
	while(1)
	{
		printf("\n	Enter choice\n\n	1.add 2.del 3.display : ");
		scanf("%d",&choice);

		if(choice == 1)
			add_record();
		else if(choice == 2)
			del_record();
		else if(choice == 3)
			display_record();
		else
			printf("\nEnter the correct choice\n");
	}
}


void add_record(void)
{
	if(cnt < maxsize)
	{
		printf("Enter name : ");
		scanf("%s",var[cnt].name);
		printf("Enter DOB : ");
		scanf("%d",&var[cnt].dob);
		cnt++;
	}
	else
		printf("\nThe size of records are full\n");
}


void del_record(void)
{
        int d_name,i;
	for(i=0;i<cnt;i++)
	printf("enter name to be delete:");
	scanf("%s",&d_name);
	if(cnt == 0)
		printf("\nThere is no record to delete\n");
	for(i=0;i<=cnt;i++)
	{
	 if(var[i].name == d_name)
		for(int j=i;j<cnt-1;j++)
			var[i]=var[j+1];
	}
        cnt--;
}


void display_record(void)
{
	if(cnt == 0)
		printf("\nThere are no records to display\n");
	else
	{
		int i;
		for(i=0;i<cnt;i++)
			printf("%s	%d\n",var[i].name,var[i].dob);
	}
}


