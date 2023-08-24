#include<stdio.h>

char *ustrchr(char *,char );
int main()
{
	char a[20],b;
	puts("enter the array to insert into program : ");
	gets(a);
	printf("Enter the character to search : ");
	b = getchar();
	printf("adress of a is %d\n",a);
	
	char *ptr = ustrchr(a,b);

	printf("%d\n",ptr);

}

char *ustrchr(char *a ,char b)
{
	int i;
	for(i=0;a[i];i++)
	{
		if(a[i]==b)
		{
			return (a+i);
		
		}
	}
	if(!a[i])
		return NULL;
}
