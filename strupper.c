#include<stdio.h>
int main()
{
	char s[10];
	int i;
	printf("enter a string:");
	gets(s);
	for(i=0;s[i]!='\0';i++)
	{
	//	if(s[i] >= 'a' && s[i] <= 'z')
	if(s[i] > 'A' && s[i] <= 'Z')
		s[i]=s[i]+32;
		//	s[i]=s[i]-32;
	}
	printf("the converted string is %s",s);
}
