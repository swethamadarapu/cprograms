#include<stdio.h>
#include<string.h>
int main()
{
	char s[10], *p;
	int i;
	printf("enter a string:\n");
	for(i=0;i<10;i++)
		scanf("%s",&s[i]);
	for(i=0;s[i]!='\0';i++)
	{
		while(p=strchr(s+i+1,s[i]))
			memmove(p,p+1,strlen(p+1)+1);
	}
	printf("%s\n",s);
}

