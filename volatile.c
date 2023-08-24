#include<stdio.h>
int main()
{
	int i=10;
	volatile int j=10;
	printf("%d %d %d\n",++i,++i,++i);

	printf("%d %d %d\n",++j,++j,++j);
}

