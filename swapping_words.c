#include<stdio.h>
#include<string.h>


void mystrrev(char *a, int len)
{
        int i,j;
        char temp;
        for(i=0,j=len-1;i<j;i++,j--)
        {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
        }
}

void mystrrev2(char *a,int prev_len,int len)
{
        static int i=0;
        int j=0,k=0;
        char temp;
        for(j=prev_len+len-1;i<j;i++,j--)
        {
                temp =a[i];
                a[i]=a[j];
                a[j]=temp;
        }
        i= prev_len+len+1;

                a[i-1]=' ';
}


int main()
{
        char a[]="nithish naroju kumar santhosh kumar naroju";
        int len,prev_len=0;
        int t_len=strlen(a);


        mystrrev(a,strlen(a));
        printf("%s\n",a);

        char *token =strtok(a, " ");
        while(token!=NULL)
        {
                len =strlen(token);
             //   printf("%s %d\n",token, len);

                mystrrev2(a,prev_len,len);
                token = strtok(NULL, " ");
                prev_len= prev_len+len+1;

        }
        a[t_len]=0;
        printf("%s\n",a);
}
