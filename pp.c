#include <stdio.h>
#include<stdlib.h>
int main() {
	int n,m;
	int **p,*q;
	int a[n][m];
	int i,j;
	printf("enter the n and m values\n");
	scanf("%d %d",&n,&m);
	//q = malloc(n*m*4);
	q=(int*)malloc(n*m*sizeof(int ));
	printf("enter the elements:\n");

/*	for(i=0;i<n;i++)
		for(j=0;j<m;j++)
			scanf("%d",(p+i+j));
*/


	for(i=0;i<n*m;i++)
	{
			scanf("%d\n",(q+i));

		//printf("\n");
	}


	for(i=0;i<n;i++)
		for(j=0;j<m;j++)
			printf("a[%d][%d]=%d\n",i+1,j+1,*(q+(i*m)+j));
	// printf("\n");
	return 0;

}
