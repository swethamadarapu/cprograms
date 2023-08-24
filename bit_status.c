#include<stdio.h>
int main()
{
	int num,pos,sta;

	printf("enter the num");
	scanf("%d",&num);


	printf("enter the pos");
	scanf("%d",&pos);

	sta = 1 & (num >>pos);

	printf("%d",sta);
}
