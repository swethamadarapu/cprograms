#include<stdio.h>
int main()
{
	int a[6]={16,17,4,3,5,2},i,large=0,count=0,j;
	for(i=0;i<6;i++)
	{
		if(a[i]>large)
		{
			j=i;
		   large=a[i];
		  
		}
	}
	printf("%d\n",large);
	count =0;

	for(i=j+1;i<6;i++)
	{
		if(large > a[i])
			count++;
	} 

printf("count=%d\n",count);	
        if(count ==  6-j-1)
	{
		printf("yes");

	}
	else
	{
		printf("the elements are not small");
	}
}
