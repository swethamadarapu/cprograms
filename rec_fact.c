#include<stdio.h>
int fact(int);
int main()
{
	int num;
	printf("enter the number:");
	scanf("%d",&num);
/*	for(int i=1;i<num;i++)
	{
		printf("%d\n",fact(i));
	}*/
	printf("%d",fact(num));
	return 0;
}
int fact(int num)
{
	if(num ==0 || num == 1)
	{
		return 1;
	}
	else 
	{
		return num*fact(num-1);
	}
}
