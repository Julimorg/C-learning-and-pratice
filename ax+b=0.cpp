#include<stdio.h>
int main()
{
	int a,b;
	printf("ax+b=0");
	printf("\n---------\n");
	printf("input a: ");
	scanf("%d",&a);
	printf("input b:");
	scanf("%d",&b);
	if( a < 0 )
	{
		printf("Error! Cant Solve the problem!");
	}
	if( a == 0)
	{
		printf("Error! Cant solve the problem!");
	}
	float solved = (float)-b/a;
	if( a > 0)
	{
		printf("%dx+%d = %.2f",a,b,solved);
	}
	return 0;
}
