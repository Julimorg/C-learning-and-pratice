#include<stdio.h>
int main()
{
	int n;
	printf("input n : ");
	scanf("%d",&n);
	int a[n];
	for(int i = 0; i<n;i++)
	{
		printf("A[%d] = ",i);
		scanf("%d",&a[i]);
	}
	int sum = 0;
	for(int i = 0 ;i<n;i++)
	{
		if( a[i] % 2 !=0 && a[i] > 0 )
		{
			sum+=a[i];
		}
	}
	printf("Sum = %d ",sum);
	return 0;
}
