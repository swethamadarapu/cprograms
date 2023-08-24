#include<stdio.h>
int main()
{
	int a,rem,hig=0,small=9;
	printf("Ente rthe number : ");
	scanf("%d",&a);
	while(a>0)
	{
//		printf("a = %d\n",a);
		rem = a%10;
		if(rem > hig)
			hig = rem ;
		if(rem < small)
			small = rem;
		a=a/10;
	}
//	printf("a = %d\n",a);

	printf("highest num = %d	small num = %d\n",hig,small);
}
