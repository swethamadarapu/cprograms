#include<stdio.h>
int main()
{
	int num;
	printf("enter the number to check it is positive or negative:");
	scanf("%d",&num);
	if(((num>>31)&1)==1)
	printf("it is a negative number");
	else
		printf("it is a positive number");
}
