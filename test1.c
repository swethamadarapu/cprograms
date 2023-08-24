#include<stdio.h>
#include<stdlib.h>
#define mask 20 
int main()
{
  FILE* head;
  char str[30];
  head=fopen("<stdio.h>","r");
  fgets(str,30,head);
  printf("%s",str);
  fclose(head);
  return 0;
  printf("%d",mask); // this is masking 

}

