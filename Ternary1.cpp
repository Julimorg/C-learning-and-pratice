#include<stdio.h>
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	if ( a > ( b >= 0 ? 1 : 5) )
	{
		printf(" a is larger");
	}
	else
	{
		printf("a is smaller");
	}
	return 0;
}
