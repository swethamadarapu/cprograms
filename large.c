#include<stdio.h>
int main()
{
	int n,i,large=0;
	int a[20];
	printf("enter no of elements:");
	scanf("%d",&n);
	printf("enter elements:");
	for(i=0;i<=n;i++)
	{
		scanf("%d",a);
		
		if(a[i]>large)
		{
			large==a[i];
		}
		printf("%d",large);
	}
}
