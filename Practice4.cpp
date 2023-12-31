#include<stdio.h>
int main()
{
	int a,b;
	printf("input A: ");
	scanf("%d",&a);
	printf("input B: ");
	scanf("%d",&b);
	if( a>=0 && b>=0)
	{
		printf("%d and %d is same sign ",a,b);
	}
	if( a <= 0 && b>= 0)
	{
		printf("%d and %d is different sign",a,b);
	}
	if( a>=0 && b<=0)
	{
		printf("%d and %d is different sign",a,b);
	}

return 0;
}
