#include<stdio.h>
int main()
{
	int num,i , one=0,zeros=0;

	printf("enter the num");
	scanf("%d",&num);

	for(i=0;i<8;i++)
	{
		if(num&1)
		{
			one++;
		}
		else 
		{
			zeros++;
		}
		num = num>>1;
	}
	printf("no of ones : %d and zeros are %d",one,zeros);
}
