#include<stdio.h>
int main()
{
	int num,i;
	printf("the number are:");
	scanf("%d",&num);
	numbers();
}
int numbers(int num)
{
	int i;
	for(i=0;i<num;i++)
		printf("%d",i);
}
