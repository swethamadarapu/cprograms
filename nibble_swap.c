#include<stdio.h>
int main()
{
	unsigned int num;

	printf("enter the num");
	scanf("%d",&num);

	num  = ((( num & 0xf0) >> 4) | ((num & 0x0f) << 4));

	printf("%d",num);
}
