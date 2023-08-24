#include<stdio.h>
int main()
{
	int a[10]={1,2,1,3,1,3,1,1};
	int i,count=0,j;
	for(i=0;i<10;i++)
	{
		if(a[i]==1)
		{
			count++;
		}

	}
	printf("%d  ",count);

}
