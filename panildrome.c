#include<stdio.h>
int main()
{
	int rev =0, rem=0;
	int num , temp;
	printf("enter the number :");
	scanf("%d" ,&num);
	 temp= num;
	while (num > 0)
	{
		rev = num%10;
		rem = rem*10+rev;
		num = num/10;
	}
	if(temp == rem)
	{
		printf("It is a palindrome");
	}
	else 
	{
		printf("it is not a palindrome!");
	}
}
