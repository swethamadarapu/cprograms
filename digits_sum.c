#include <stdio.h>
int check_num(int,int);
int asce(int);


int desc(int num)
{
	int rem,sma=0;
	while(num>0)
	{
		rem=num%10;
		if(rem >= sma)
			sma = rem;
		else 
			return 0;
		num=num/10;
	}
	return 1;
}

void main()
{
	int min,max,digit,small,big,a[50],i;
	printf("enter the min and max values \n");
	scanf("%d%d",&min,&max);
	printf("enter the digit\n");
	scanf("%d",&digit);
	int mid = (min + max)/2;
	for(min; min<=max; min++)
	{

		if(check_num(min,digit)== 1)
		{

			if((asce(min) == 1) || desc(min) == 1)
			{
				if(min <= mid ) 
				{
					if(min%5 == 0)
						printf("%d ",min);
				}
			/*	else if((min > mid) && (min <= (mid+100)))
				{
					if(min % 3 == 0)
						printf("%d ",min);
				}*/
			}
		}
	}

	printf("\n");


}


int check_num(int num,int digit)
{
	int sum=0,m;
again:
	while(num>0)
	{
		m=num%10;
		sum=sum+m;
		num=num/10;
	}
	if(sum>9)
	{ 
		num = sum;
		sum = 0;
		goto again;
	}
	if(sum == digit)
		return 1;
	else
		return 0;

}

int asce(int num)
{
	int rem,hig = 9;
	while(num>0)
	{
		rem = num %10;
		if(rem <= hig)
			hig = rem;
		else
			return 0;
		num = num/10;
	}
	return 1;
}



