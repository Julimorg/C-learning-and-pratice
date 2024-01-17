#include<stdio.h>
int main()
{
	int n;
	printf("input N: ");
	scanf("%d",&n);
	int a[n];
	for(int i = 0 ; i<n;i++)
	{
		printf("A[%d] = ",i);
		scanf("%d",&a[i]);
	}
	for(int i = 0 ; i<n; i++)
	{
		if( a[i]>=0 && a[i]<=10){
			printf(" %d",a[i]);
		}
	}
	return 0;
}
