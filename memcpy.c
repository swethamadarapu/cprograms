#include<stdio.h>
#include<string.h>
int main()
{
	char s[10]="thisis";
	char c[10]="memcopy";
        memcpy(s+6,c,strlen(c)+1);
		printf("%s\n",s);
}
