#include<stdio.h>
int main()
{
	int data;
	printf("enter data to be checked it is power of 2 :");
	scanf("%d",&data);
	if(data = (data & (data - 1))==0)
	printf("It is power of 2");
	else
		printf("It is not power of 2");
}
