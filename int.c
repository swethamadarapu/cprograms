#include <stdio.h>

int main() {
	int a,rem,i=0,rev=0;
	char b[10];
	printf("number:");
	scanf("%d",&a);
	while(a!=0)
	{
		rem = a%10;
		rev =rev *10+rem;
		a = a/10;
	}
	printf("%d  \n",rev);
/*	while(rev!=0)
	{
		rem = rev%10;
		b[i] = rem+48;
		i++;
		rev = rev/10;
	}
	b[i] =0;*/
	printf("%s\n",b);

	return 0;
}
