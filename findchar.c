#include<stdio.h>
#include<string.h>
int main()
{
    char str[20],letter;
    int i,count=0;
    printf("enter a string:\n");
    scanf("%s",str);
    printf("the string is %s\n",str);
    printf("enter the letter u want to search:\n");
    scanf(" %c",&letter);
    for(i=0;str[i];i++)
    {
        if(str[i]==letter)
        {
        count++;
        }
    }
       printf("character %c occur %d",letter,count);
}

