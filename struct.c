#include<stdio.h>
#include<stdlib.h>
struct student 
{
	char *name;
	int roll;
	int marks;
};
void college(struct student *c);
int main()
{
	struct student *s = (struct student *)malloc(sizeof(struct student ));
	s->name = "swetha";
	s->roll = 99;
	s->marks = 20;
	college(s);
}
void college(struct student *c)
 {   
	 printf("the data is \nname: %s		roll: %d		marks: %d	rank: %d",c->name,c->roll,c->marks,c->rank);
 }
	 




