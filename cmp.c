#include<stdio.h>
int main()
{
	char a[10],b[10];

	printf("Enter the 1st string : ");
	scanf("%s",a);
	printf("%s\n",a);
//	__fpurge(stdin);
	printf("Enter the 2nd string : ");
	scanf("%s",b);
	printf("%s\n",b);

	int i,j;

	for(i=0; a[i] && b[i] ;i++)
	{
		if(a[i] == b[i]);
		else
		{
			printf("%d\n",a[i]-b[i]);
			break;
		}
	}
       if(a[i] == b[i])
       	       printf("the two strings are same\n");
       else
	       printf("%d\n",a[i]-b[i]);



}
