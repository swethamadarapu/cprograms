#include<stdio.h>
int fact (int);
int main()
{
	int i=5;
	printf("factioral of a given num is%d :",fact(i));
	return 0;
}
int fact( int i)
{
	if(i==0 || i==1)
	{
		return 1;
	}
	else
	{
		return i*fact(i-1);
	}
}

