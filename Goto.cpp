#include<stdio.h>
int main()
{
	int a;
	printf("input A: ");
	scanf("%d",&a);
	if (a >= 0)
	{
		goto positive;
	}else if ( a <= 0)
	{
		goto negative;
	}
	else 
	{
		goto equal;
	}
	positive: 
	printf("Positive ");
	return;
	negative:
	printf("Negative");

	equal:
	printf("Equal");

	return 0;
}
