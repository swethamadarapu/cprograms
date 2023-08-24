#include<stdio.h>

int sum_of_digits(int ,int);
void check_palindrome(int ,int ,int,int);

int main()
{
	int num,end,div,dsum;
	printf("Enter the starting range : ");
	scanf("%d",&num);
	printf("Enter the ending range : ");
	scanf("%d",&end);
	printf("enter the number to be divide : ");
	scanf("%d",&div);
	printf("Enter the number that is sum of the digits : ");
	scanf("%d",&dsum);
	check_palindrome(num,end,div,dsum);
}


void check_palindrome(int num,int end,int div,int dsum)
{
	int temp,rev,rem;

	for(num;num<=end;num++)
	{
		temp = num;
		rev  = 0; 
		while(temp)
		{
			rem = temp%10;
			rev = rev*10+rem;
			temp/=10;
		}

		if(rev == num)
			if(rev % div ==0)
				if(sum_of_digits(rev,dsum))
					printf("%d ",rev);
	}

	printf("\n");

}

int sum_of_digits(int rev,int dsum)
{
	int sum=0,rem;
lable:	while(rev)
	{
		rem=rev%10;
		sum=sum+rem;
		rev=rev/10;
	}

	if(sum > 9)
	{
		rev = sum;
		sum = 0;
		goto lable;
	}

	if(sum == dsum)
		return 1;
	else
		return 0;
}











