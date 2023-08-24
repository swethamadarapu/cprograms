#include<stdio.h>
#define MAC(i,j) (i>j)?i:j
void main()
{
	int i=10,j=8;
	printf("i=%d j=%d MAC=%d\n",i,j,MAC(++i,++j));
}
	
