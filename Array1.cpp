#include<stdio.h>
int Sum2int(int a[2])
{
	int sum = 0;
	for(int i = 0 ; i<2; i++)
	{
		printf("A[%d] = ",i);
		scanf("%d",&a[i]);
	}
	for(int i = 0; i<2; i++)
	{
		sum += a[i];
	}
	printf("Sum = %d",sum);
	return sum;
}
int Sum5int(int a[5])
{
	int sum = 0;
	for(int i = 0 ; i<5; i++)
	{
		printf("A[%d] = ",i);
		scanf("%d",&a[i]);
	}
	for(int i = 0; i<5; i++)
	{
		sum += a[i];
	}
	printf("Sum = %d",sum);
	return sum;
}
int Sum10int(int c[10])
{
	int sum = 0;
	for(int i = 0 ; i<10 ; i++)
	{
		printf("A[%d] = ",i);
		scanf("%d",&c[i]);
	}
	for(int i = 0 ; i<10 ; i++)
	{
		sum += c[i];
	}
	printf("Sum = %d",sum);
	return sum;
}
int SumNint()
{
	int n;
	int sum = 0;
	printf("input N: ");
	scanf("%d",&n);
	if (n <= 0) {
        printf("Invalid size for array\n");
        return -1;
    }
     int a[n];
	for(int i = 0 ; i<n;i++)
	{
		printf("A[%d] = ",i);
		scanf("%d",&a[i]);
	}
	for(int i = 0 ; i<n;i++)
	{
		sum += a[i];
	}
	printf("Sum = %d ",sum);
}
int main()
{
	int a[2];
	Sum2int(a);
	printf("\n-------------\n");
	int b[5];
	Sum5int(b);
	printf("\n-------------\n");
	int c[10];
	Sum10int(c);
	printf("\n-------------\n");
	SumNint();
	return 0;
}
