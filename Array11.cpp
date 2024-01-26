#include<stdio.h>
int main()
{
	int n,m;
	int a[100][100];
	printf("input N: ");
	scanf("%d",&n);
	printf("input M: ");
	scanf("%d",&m);
	for(int i = 0 ; i<n;i++)
	{
		for(int j = 0;j<m;j++)
	{
		printf("A[%d][%d] = ",i,j);
		scanf("%d",&a[i][j]);
	}
}
	printf("\n---------\n");
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			printf("A[%d][%d] = %d\n", i, j, a[i][j]);
		}
	}

	return 0;
}
