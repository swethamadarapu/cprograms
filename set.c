#include<stdio.h>
int main()
{
	int num , pos;
	printf("enter the number :");
	scanf("%d",&num);

	printf("enter the pos");
	scanf("%d",&pos);
	num = num | (1<< pos);

	printf("after set the %d the num is %d",pos ,num);
}
