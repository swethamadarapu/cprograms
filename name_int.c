#include<stdio.h>
int main()
{
	char a[4]={'t','e','j','v'};
	int i , value=0;
	for(i=0;i<4;i++)
	{
		if(a[i]>value)
		value = a[i];
	}
	printf("%c	%d\n",value,value);
}

