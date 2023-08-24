#include<stdio.h>
int main()
{
	int num,i,temp;
	int rev=0 ,rem =0;
	printf("enyer the number :");
	scanf("%d",&num);
	while (num >0)
	{
		rev = num%10;
		rem = rem*10+rev;
		num = num/10;
	}
	printf("reverse no is :%d",rem);
}
