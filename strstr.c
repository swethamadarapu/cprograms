#include<stdio.h>

char * mystrstr(const char*,const char *);
int main ()
{
	char a[]="madarapuswetha";
	char b[]="swetha";
	printf("starting address = %d\n",a);
	char *ptr = mystrstr(a,b);
	printf("found at :%d\n",ptr);
}


char * mystrstr(const char *a,const char *b)
{
	int i = 0, j = 0;

	for(i,j ; a[i] ; i++ )
	{
		if(a[i] == b[j])
		{
			int temp = i;
			i++;
			j++;
			for( ;b[j] ; i++,j++)
			{
				if(a[i] == b[j])
					continue;
				else
					return NULL;
			}
			return a+temp;
		}
	}
	return NULL;
}
