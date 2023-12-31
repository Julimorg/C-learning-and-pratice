#include<stdio.h>
int main()
{
	int n;
	printf("input n:" );
	scanf("%d",&n);
	int count = 0;
	printf("List of the number is: \n");
	for(int i = 1; i<=n;i++)
	{
		if(n % i== 0 )
		{
			printf(" %d",i);
			count++;
		}
	}
	printf("\n-----------\n");
	printf("Count of the list is : %d",count );
	return 1;
}
