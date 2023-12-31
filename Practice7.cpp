#include<stdio.h>
int main()
{
	int n;
	int sum = 0;
	printf("input N: ");
	scanf("%d",&n);
//	int i = 1;
//	while(i<=n)
//	{
//		sum+=i;
//		i++;
//	}
//	int i = 1;
//	do{
//		sum+=i;
//		i++;
//	}while(i<=n);
	for(int i = 1; i<=n;i++)
	{
		sum+=i;
	}
	printf("Sum is : %d",sum);
	return 1;
}
