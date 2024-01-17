#include<stdio.h>
int main()
{
	int n;
	printf("input N: ");
	scanf("%d",&n);
	int sum = 0;
	int a[n];
	for(int i = 0 ;i< n;i++)
	{
		printf("A[%d] = ",i);
		scanf("%d",&a[i]);
	}
	for(int i = 0 ; i<n; i++)
	{
		sum = a[0] + a[n-1];
	}
	printf("Sum = %d", sum);
	return 0;
}
