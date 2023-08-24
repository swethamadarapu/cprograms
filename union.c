#include<stdio.h>
struct  
{
unsigned char a:2;
	char b:4;
}var;
int main()
{
	var.a=1;
	var.b=9;
//	printf("%d\n",var.a);
//	printf("%d\n",var.b);
	printf("%d\n",var.a);
	var.a=1;
	printf("%d\n",var.a);
	var.a=2;
        printf("%d\n",var.a);	
	var.a=3;
	printf("%d\n",var.a);
	var.a=4;
	printf("%d\n",var.a);


}

