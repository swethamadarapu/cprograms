#include<stdio.h>
#include<string.h>
int main()
{
	int i,j,len;
	char a[20],temp;
	printf("enter a string :");
	scanf("%s",a);
	for(i=0;a[i]!='\0';i++)
		len++;
	i=0;
	j=len-1;

	while(i<j)
	{
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;
		i++;
		j--;
	}
	printf("the reversed string is %s:",a);
}
