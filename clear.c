#include<stdio.h>
int main()
{
	int num , pos;
	
	printf("enter the num");
	scanf("%d",&num);


	printf("enter the pos");
	scanf("%d",&pos);

	num = num & (~(1<<pos));

	printf("after clearing %d",num);
}
