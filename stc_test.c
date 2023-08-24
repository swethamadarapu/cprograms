#include<stdio.h>
   #include<string.h>
   struct phonebook
   {
           char name[50];
           int mob;
           char add[50];
   };
   int main()
  {
          int i,n;
          struct phonebook p1;
          printf("enter the n value:\n");
          scanf("%d",&n);
          for(i=0;i<n;i++)
          {
                  printf("enter name:\n");
                  scanf("%c",p1.name);
                  printf("enter mobile no:\n");
                  scanf("%d",&p1.mob);
               if((p1.mob >='0') && (p1.mob <= '9'))
                   printf("%d",p1.mob);
               else
               printf("enter only digits\n");
          }
          printf("name:%s",p1.name);
          printf("mob:%d",p1.mob);
 }
 

