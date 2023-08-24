#include<stdio.h>
int main()
{
	int sum=0;
	int i,num;
	printf("enter the num till where you to print:");
	scanf("%d",&num);
	for(i=0;i<=num;i++)
	{
		sum = sum+i;
	}
	printf("sum is %d",sum);
}
