#include<stdio.h>
int main()
{
	int num = 8,i,count=0;
	while (num > 0)
	{
	num = num & (num-1);
	count++;
	}

	printf("%d",count);
}
