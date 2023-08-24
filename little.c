#include<stdio.h>
int main()
{
	int  a=0x0201;
        char *ptr = &a;
	if( *ptr == 1)
	{
		printf("it is little endian");
	}
	else
	{
		printf("it is big endian");
	}
}
