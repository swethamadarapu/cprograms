#include<stdio.h>
int natu(int num);
int main()
{
	int num,a;
	printf("enter a number:");
	scanf("%d",&num);
	natu(num);
	//printf("%d\n",a);
}
int natu(int num)
{
	if(num==0)
	{
		return 1;
	}
	else
	{
		 natu(num-1);
		printf("%d\n",num);

	}
}



