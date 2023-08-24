#include<stdio.h>
struct emp
{
	int id;
	int *sal;
};
int main()
{
	struct emp s,*p;
        p=&s;
        int a=10;
        s.sal=&a;
        s.id=20;
        printf("%d\n",p->id);
        printf("%d\n",*(p->sal));	
	printf("%d\n",*(s.sal));
	printf("%d\n",s.id);
}
	//scanf("%d",&s.id);
//	printf("%d",s.id);

