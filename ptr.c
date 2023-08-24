#include <stdio.h>
int main()
{
    int a=20;
    
    int *ptr=&a;
  int c=++(*ptr);  
   printf("%d %d\n",c,a);
   a--;
   printf("%d\n",a);
   
    
}
