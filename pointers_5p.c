#include<stdio.h>
int main()
{ 
	char var=50; 
	char *ptr=&var;
	printf("%d\n",--*ptr);
	printf("%d\n",*ptr);
	printf("%c\n",var);
}
