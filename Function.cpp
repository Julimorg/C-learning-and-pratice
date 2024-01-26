#include<stdio.h>
int input(int n)
{
	printf("input N: ");
	scanf("%d",&n);
	return n;
}
void sumint(int n)
{
	int sum = 0;
	for(int i = 1; i<=n;i++)
	{
		sum+=i;
	}
	printf("\nSum = %d ",sum);	
}
void sumeven(int n)
{
	int sum = 0 ;
	for(int i = 1; i<=n;i++)
	{
		if( i % 2 == 0)
		{
			sum += i;
		}
	}
	printf("\nSum of even : %d ",sum);
}
void listallDiv(int n)
{
	int count = 0 ;
	printf("\nlist of div: ");
	for(int i = 1;i<=n;i++)
	{
		if( n %  i == 0)
		{
			count++;
			printf("%d ",i);		
		}
	}
	printf("\nCount of the div : %d ",count);
}
int main()
{
	int n = input(n);
	sumint(n);
	sumeven(n);
	listallDiv(n);
	return 0;
}
