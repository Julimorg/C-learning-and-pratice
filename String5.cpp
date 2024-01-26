#include<stdio.h>
#include<string.h>
int main()
{
	char a[100];
	char c;
	printf("input String: ");
	gets(a);
	printf("input any keyword in the String: ");
	scanf("%c",&c);
	int count = 0;
	int len = strlen(a);
	for(int i = 0 ; i< len;i++)
	{
		if( a[i] == c)
		{
			count++;
		}
	}
	printf("%d ",count);
	return 0;
}
