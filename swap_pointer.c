#include <stdio.h>
int main(){
int a,b,c,*ptr,*ptr2,*ptr3;
printf("enter 3 numbers:");
	scanf("%d %d %d",&a,&b,&c);
  ptr=&a;
  ptr2=&b;
ptr3=&c;
printf("the values of a=%d,b=%d,c=%d\n",*ptr,*ptr2,*ptr3);
ptr=&b;
ptr2=&c;

ptr3=&a;



printf("\nthe values of a=%d,b=%d,c=%d",*ptr,*ptr2,*ptr3);
}

