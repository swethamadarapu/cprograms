#include<stdio.h>
int main()
{
	int sum=0,rem=0;
	int num;
	printf("enter the number:");
	scanf("%d",&num);
	while(num > 0)
	{
		rem = num%10;
		sum = sum+rem;
		num = num/10;
	}
	printf("the sum is : %d",sum);
}
