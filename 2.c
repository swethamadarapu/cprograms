#include<stdio.h>
int main()
{
	int num=5025,twocount=0,fivecount=0,a;
	while(num!=0)
	{
		a=num%10;
		if(a==2)
		{
			twocount++;
		}
		if(a==5)
			fivecount++;
		
		num=num/10;
	}
	printf("%d %d\n",twocount,fivecount);
}

	

