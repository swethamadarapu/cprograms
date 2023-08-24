#include <stdio.h>
int main(){
char a,b;
char *ptr1=&a,*ptr2=&b;
printf("enter 2 value:");
scanf("%c %c",&a,&b);
printf("size of pointer is %ld\n",sizeof(*ptr1));
printf("the ascii value are a=%d,b= %d\n",*ptr1,*ptr2);
if(a<b)
{
    printf("%d",*ptr2);
}
else
{
    printf("%d",*ptr1);
}
}
