#include<stdio.h>

int main()
{
	char a[7] = "swetha";
	char b[7] = "madarap";
	int i;
	for(i=0;i<7;i++)
	{
		b[i] = a[i];
	}
	printf("b=%s\n",b);
	printf("a=%s",a);
}
