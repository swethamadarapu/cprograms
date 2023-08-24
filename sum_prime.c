#include<stdio.h>
int main()
{
    int i,j,count=0,num,sum=0,pc=0;
    scanf("%d",&num);
    for(i=1;i<100;i++)
    {
        count = 0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
                count++;
        }
        if(count == 2)
        {
            pc++;
            if(pc <= num)
                sum+=i;
        }
    }
    
    printf("%d",sum);
}

