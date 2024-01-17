#include<stdio.h>
int main()
{
	int n;
	printf("Input N: ");
	scanf("%d",&n);
	int a[n];
	for(int i = 0; i<n;i++)
	{
		printf("A[%d]=  ",i);
		scanf("%d",&a[i]);
	}
	for(int i = 0 ; i<n;i++)
		for(int j = i + 1; j<n;j++)
		{
			
		}
}
