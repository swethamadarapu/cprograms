#include<stdio.h>
int main()
{
	int i;
	char a[]="swethamadarapu";
	char b[]="saitejamadarapu";
	for(i=0;i<20 && a[i];i++)
		b[i]= a[i];
//	printf("%s\n",b);
	for(;i<20;i++)
		b[i] = '\0';	

	printf("%s",b);
}
