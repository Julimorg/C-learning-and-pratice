#include<stdio.h>
int main()
{
	int a[26];
	for(int i = 0 ; i<=25;i++)
	{
		a[i] = 'A' + i;
		printf("%d %c ",a[i],a[i]);
	}
	return 1;
}
