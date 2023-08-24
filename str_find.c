#include<stdio.h>
int main()
{
	char a[20] = "thABis is vector";
	char b = 'A';
	int i,n;
	n=sizeof(a)/sizeof(a[0]);
	for(i=0;i<n;i++)
	{
		if(a[i]==b)
		{
			printf("%d",i);
	}
}
