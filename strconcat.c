#include<stdio.h>
#include<string.h>
int main()
{
	char str1[10] = "Blue";
	char str2[4] = "Sky";
	int i = 0,j=0;
	
	while(str1[i] != '\0')
		i++;
	while(str2[j] != '\0')

	{
		str1[i] = str2[j];
		j++;
		i++;

	}

//	str1[i] !='\0';
	printf("%s",str1);
}
