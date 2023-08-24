#include<stdio.h>  
#include <string.h>    
struct phonebook{    
	char name[10];
	int phn;
	char add[10];
};    
int main()
{    
	int i,n; 
	struct phonebook ph;
	printf("enter n value:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{    
		printf("\nEnter name:");    
		scanf("%s",ph.name);    
		printf("Enter phn no:");    
		scanf("%d",&ph.phn); 
		printf("enter a address:");
		scanf("%s",ph.add);
	} 
		for(i=0;i<n;i++)
	{
		printf("the names in the book are:%s\n",ph.name);
	}
}

