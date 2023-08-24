#include <stdio.h>
int main(){
int a,b,sum;
int *ptr1=&a,*ptr2=&b;
printf("enter a value:");
scanf("%d",&a);
printf("enter a value:");
scanf("%d",&b);
sum=*ptr1+*ptr2;

printf("size of pointer is %ld\n",sizeof(*ptr1));
printf("%d",sum);
}
