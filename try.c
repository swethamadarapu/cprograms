#include<stdio.h>
int main()
{
	char a[10];
	int i;
/*	int i,p,b,c,d;
	printf("enter p b c d\n");
	scanf("%d%d%d%d",&p,&b,&c,&d);
*/
	printf("enter  a string : ");
	scanf("%s",a);
	for(i=0;a[i];i++)
	{
		if(a[i] == '+')
			a[i] = '-';
		else if(a[i] == '-')
			a[i] = '*';
		else if(a[i] == '*')
 			a[i] = '/';
	}
	
	
	printf("%s\n",a);



}
