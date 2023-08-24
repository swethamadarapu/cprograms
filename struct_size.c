#include<stdio.h>
struct 
{
	int a;      
	char b;      
}x[2];
int main()
{
	int start, end;
	start = &x[1].a;
	end = &x[0].a;
	printf("%d",(start - end));
}

