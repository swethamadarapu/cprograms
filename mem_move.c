#include<stdio.h>
#include<string.h>

int main()
{
	char str[] = "embedded systems embedded systems";
	char ch;
	printf("enter letter to search : ");
	scanf("%c",&ch);
	char *ptr = NULL;
	char *ptr1 = NULL;
	if(ptr = strchr(str,ch))
	{
		while(ptr1 = strchr(ptr+1,ch))
		{
			memmove(ptr1,ptr1+1,strlen(ptr1)+1);
		}
	}
	printf("%s\n",str);
}
