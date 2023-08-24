#include<stdio.h>
#include<string.h>
int main()
{
	char a[10];
	char b[10];
	int i,j;
	printf("enter 1st string:\n");
//	scanf("%s",a);
        gets(a);
	printf("enter 2 string :\n");
//	scanf("%s",b);
	gets(b);
	for(i=0;a[i];i++)
	{
		for(j=0;b[j];j++)
		{
			if(a[i]==b[j])
			{
		         //    	b[j]='1';
				break;
			}
		}
	}
		if(a[i]!= b[j])
		{
			printf("it is not an anagram\n");
			break;
		}
 		if(a[i]==0)
			printf("anagram\n");                                                     
}

