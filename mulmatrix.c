#include <stdio.h>

   int main()
{
	int a[10][10],b[10][10],mul[10][10],i,j,k,r,c;
        printf("enter no of rows:");
	scanf("%d",&r);
	printf("enter no of columns:");
       	scanf("%d",&c);   
	printf("enter the elements of first matrix:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("enter the 2 matrix elements:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	printf("the mul of both matrix is:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			mul[i][j]=0;
			for(k=0;k<c;k++)
				{
					mul[i][j]=mul[i][j]+a[i][k]*b[k][j];
				}
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d\t",mul[i][j]);
		}
		printf("\n");
	}
}
