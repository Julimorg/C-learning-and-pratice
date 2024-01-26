#include<stdio.h>
int main()
{
	int a[100][100];
	int n,m;
	printf("input N: ");
	scanf("%d",&n);
	printf("input M: ");
	scanf("%d",&m);
	for(int i = 0 ; i<n;i++)
	{
		for(int j= 0 ;j<m;j++)
		{
			printf("A[%d][%d]: ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	int sum = 0;
	for(int i = 0 ; i<n;i++)
	{
		for(int j= 0 ;j<m;j++)
		{
			sum+=a[i][j];
		}
	}
	printf("Sum = %d",sum);
	return  0;
}
