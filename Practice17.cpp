#include<stdio.h>
int main()
{
	int a,b,c;
	printf("input A: ");
	scanf("%d",&a);
	printf("input B: ");
	scanf("%d",&b);
	printf("input C: ");
	scanf("%d",&c);
	if ( a <= b && b<=c)
	{
		printf("increasing");
	}else if( a >= b && b>=c )
	{
		printf("decreasing");
	}else {
		printf("neither increasing nor decreasing order");
	}
	return 0;
}
