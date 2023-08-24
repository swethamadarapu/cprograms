#include <stdio.h>

int main() {
	int a[5];
	int i,n,max,min;

	printf("enterthe array elements:");

	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
		max=min=a[0];
	}
	for(i=0;i<5;i++)
	{
		if(a[i]>max) 
			max=a[i];
		if(a[i]<min)

			min=a[i];
	}
	printf("max:%d  min :%d\n",max,min);

}

