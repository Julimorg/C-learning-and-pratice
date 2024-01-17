#include<stdio.h>
int main()
{
	int n;
	printf("input N : ");
	scanf("%d",&n);
	int sum =  0; 
	printf("The number of divisors are : ");
	for(int i = 1; i<=n;i++)
	{
		if(n%i == 0)
		{
			printf(" %d", i);
			sum+=i;
		}
	}
	printf("\n----------\n");
	printf("The sum is :%d" , sum);
	return 1;
}
