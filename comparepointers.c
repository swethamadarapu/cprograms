#include <stdio.h>
int main(){
int a,b,c,*ptr,*ptr2,*ptr3;
printf("enter 3 numbers:");
scanf("%d %d %d",&a,&b,&c);
ptr=&a;
ptr2=&b;
ptr3=&c;
if(*ptr > *ptr2 && *ptr > *ptr3)
{
    printf("ptr is greater %d",*ptr);
}
else if(*ptr2 > *ptr && *ptr2 > *ptr3)
{
    printf("ptr2 is greater %d",*ptr2);
}
else
{
    printf("ptr3 is greater %d",*ptr3);
}
}

