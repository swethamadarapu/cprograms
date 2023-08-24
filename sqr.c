//#define s(x) x*x
#include<stdio.h>
#define s(x) x*x
int main()
{
	int x=5;
	printf("%d",s(x++));
}
