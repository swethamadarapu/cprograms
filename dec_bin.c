#include<stdio.h>
int main()
{
	int a[5],num,i;
	printf("enter a number:");
	scanf("%d",&num);
	for(i=0;i<5;i++)
	{
		a[i]=num%2;
		num=num/2;
	}
	for(i=i-1;i>=0;i--)
	{
		printf("%d",a[i]);
	}
}
