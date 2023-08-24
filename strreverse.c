#include<stdio.h>
int main()
{
	char s[20],temp;
	int i,count=0,len;
	printf("enter a string:");
	scanf("%s",s);
	for(i=0;s[i];i++)
		len++;
	for(i=0;i<len/2;i++)
	{
		temp=s[i];
		s[i]=s[len-1-i];
		s[len-1-i]=temp;
	}
	printf("the reversed string is:%s\n",s);
}
