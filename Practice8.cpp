#include<stdio.h>
int main()
{
	int n;
	printf("input N: ");
	scanf("%d",&n);
	int sum = 0;
//	int i = 1;
//	while(i<=n)
//	{
//		sum = sum + i*2;
//		i++;
//	}
//	int i = 1;
//	do
//	{
//		sum = sum + i*2;
//		i++;
//	}while(i<=n);
	for(int i = 1; i<=n;i++)
	{
		sum = sum + i*2;
	}
	printf("Sum = %d",sum);
}
