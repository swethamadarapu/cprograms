#include<stdio.h>
int main()
{
	char data;
	printf("enter data:\n");
	scanf("%c",&data);
	if(data >=65 && data <= 90)
		printf("uppercase\n");
	else if(data >=97 && data <=122)
		printf("lowecase\n");
	else if(data >=48 && data <=57)
		printf("numeric\n");
	else
		printf("special character");
}
