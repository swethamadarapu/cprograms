#include<stdio.h>
int *fun()
{
    int	a=10,*b;
	b=&a;
	return b;
}
int main()
{ 
	int *ptr;
	ptr=fun();
	printf("%d\n",*ptr);
	printf("%d\n",ptr);
}

