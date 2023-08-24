#include<stdio.h>
#include<string.h>

int main()
{
	char a[10] = "mbadm";
	int i=0,len=0,j;
	char swap;

	for(i=0; a[i]; i++)
	{
		if(a[i] == 'b')
		{
			memmove(a+i,a+i+1,strlen(a+i+1)+1);
			break;
		}
	}
	for(i=0; a[i]; i++)
	{
		if(a[i] == 'd')
		{
			swap = a[i+1];
			a[i+1] = 'a';
			a[i+2] = swap;
		}
	}
	a[i] = '\0';
	printf("Before reversing %s\n",a);
	
	for(len = 0; a[len]; len++);
	j = len-1;
	while(i<j)
	{
		swap=a[i];
		a[i]=a[j];
		a[j]=swap;
		i++;
		j--;
	}
	printf("After reversing  %s\n",a);
}
