#include<stdio.h>
//#pragma pack(1);
struct abd
{
	int a;
	char b;
	float d;
};
struct sum
{
	int p;
	char q;
	float r;
}__attribute__((packed));
int main()
{
	printf("abd= %ld\n",sizeof(struct abd));
	printf("sum= %ld\n",sizeof(struct sum));
}
