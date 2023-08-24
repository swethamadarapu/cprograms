#include<stdio.h>
#include<string.h>
int main()
{
 char a[10]="swee";
 char ch[10] = "t";
 printf("the string is %s:",a);
 //strcat(a,ch);
 printf("the modified string is %ld",strlwr(a));
}
