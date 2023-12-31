#include<stdio.h>
int main()
{
	int a;
	printf("input A :");
	scanf("%d",&a);
	if( a >= 0 )
	{
		printf("A is a positive number");
	}
	else
	{
		printf("A is a negative number");
	}
	printf("\n--------\n");
	int b;
	printf("input B : ");
	scanf("%d",&b);
	if( b % 2 == 0)
	{
		printf("B is an even number");
	}
	else
	{
		printf("B is an odd number");
	}
	printf("\n--------\n");
	int c;
	printf("input C :");
	scanf("%d",&c);
	if( c % 7 == 0)
	{
		printf("C is divided by 7");
	}
	else
	{
		printf("C is not divided by 7");
	}
	printf("\n--------\n");
	int d;
	int count =0;
	printf("input D: ");
	scanf("%d",&d);
	for(int i = 1;i<=d;i++)
	{
		if( d % i == 0)
		{
			count++;
		}
	}
	if(count == 2)
	{
		printf("%d is a prime number ",d);
	}
	else
	{
		printf("%d is not prime number",d);
	}
	return 0;
}
