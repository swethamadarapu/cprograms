#include<stdio.h>
#include<stdlib.h>
int fun(int arr[len]);
int main()
{
	int arr[] = {0,1,1,0,0,0,1,0,1,0,1};
	int len = sizeof(arr)/sizeof(int);
	printf("%d\n",fun(arr[len]));	
}
int fun(int arr[len])
{
	int len = sizeof(arr)/sizeof(int);
	if (len == 1)
		return arr[0];
	else 
		return arr[len] 
			len = len -1;
	fun(arr[len]);
}
