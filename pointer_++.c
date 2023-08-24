#include<stdio.h>

int main()
{
	int a = 23;
	int *ptr = &a;

	a++;
	printf("%d\n",a);

	--a;
	printf("%d\n",a);

	*ptr+1;
	printf("%d\n",a);

	(*ptr)++;
	printf("%lu %d\n",ptr,a);

	*ptr++;
	printf("%lu %d\n",ptr,a);
}

