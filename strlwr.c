#include<stdio.h>
#include<string.h>
int main()
{
    char str[10];
    printf("enter a string:");
    scanf("%s",str);
    printf("lowcase for string is:%d",strupr(str));
}
