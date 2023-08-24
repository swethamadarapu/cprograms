#include<stdio.h>

int main()
{
	int i,size,arr[10],value;

	printf("size of array:");
	scanf("%d",&size);

	printf("enter the array elements:");
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
        }
	printf("enter the value to search:");
	scanf("%d",&value);
	for(i=0;i<size;i++)
	{
		if(arr[i]==value)
		{
			printf("found the %d vakue at %d place",value,i);
		}
	}

}



