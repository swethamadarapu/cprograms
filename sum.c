#include <stdio.h>
int main()
{
	int m,sum=0,num;
printf("enter a number");
scanf("%d",&num);
while(num!=0)
{
	m=num%10;
	sum=sum+m;
	num=num/10;
}
printf("sum is = %d",sum);
}
