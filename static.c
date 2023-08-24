#include<stdio.h>
int f1(int);
static int x=10;
int main()
{
	
      f1(x);
      printf("main %d",x);

}
int f1(int x)
{
	 printf("in f1..=%d\n",++x); //10//10
	 printf("%d\n",x);

}

