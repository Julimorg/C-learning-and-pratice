#include<stdio.h>
void divided3()
{
	int a;
	printf("input A: ");
	scanf("%d",&a);
	for(int i = 1; i <= a;i++)
	{
		if( i % 3 == 0 && i % 5 !=0)
		{
			printf("%d ",i);
		}
	}
}
int main()
{
	divided3();
	return 0;
}
