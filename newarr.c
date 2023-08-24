#include<stdio.h>
#include"mymemmove.h"

int main()
{
	int arr[] = {1,2,3,4,5,6,7,8,9,10,11,12};
	int i;
	
	for(i=0;i<=11;i++)
		printf("%d ",arr[i]);
	printf("\n");

	mymemmove(&arr[6],&arr[7],5*4);

	arr[11] = 0;
	
	for(i=0;i<=11;i++)
		printf("%d ",arr[i]);
	printf("\n");

}



		


