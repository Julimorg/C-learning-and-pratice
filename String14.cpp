#include<stdio.h>
#include<string.h>
int main()
{
	char a[100];
	printf("input String: ");
	gets(a);
	char b;
	printf("input any keyword: ");
	scanf("%c ",&b);
	for(int i = 0 ; i < strlen(a) ;i++)
	{
		if(a[i] == b)
		{
			printf(" 1 ");
		}
		else
		{
			printf(" -1 ");
		}
	}
	return 0;
}
