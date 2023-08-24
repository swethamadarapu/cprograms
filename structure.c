#include<stdio.h>
#include<string.h>
struct phonebook
{
	char name[50];
	int mob;
	char add[50];
};
int main( )
{
	int i,n;
	struct phonebook p1;
	printf("enter the n value:");
	scanf("%d",&n);
	for(i=0;i<n;i++);
	{
		printf("enter name:\n");
		scanf("%s",p1.name);
repeat:	  printf("enter mob no:\n");
	  scanf("%d",&p1.mob);
	  int temp = p1.mob;
	  while(temp){
		  if((temp)>65 && (temp)<127)
		  {
			  temp =temp/10;
			  continue;
		  }
		  else
		  {
			  printf("Please enter only digits\n");
			  goto repeat;
		  }
	  }
}
}

