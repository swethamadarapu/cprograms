#include<stdio.h>
int main()
{
	char a[10],b[10];
	printf("enter a string1: ");
	scanf("%s",a);
	printf("enter a string2: ");
	scanf("%s",b);
	int i,count = 0;
	for(i=0; a[i]&&b[i]; i++)
		;

	for(i; a[i]; i++)
		count++;

	for(i; b[i]; i++)
		count++;

	printf("%d\n",count);
}

