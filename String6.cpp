#include<stdio.h>
#include<string.h>
int main()
{
	char a[100];
	printf("input the String: ");
	gets(a);
	int len = strlen(a);
	for(int i = 0;i<len;i++)
	{
		if(a[i] == '3')
		{
			a[i] = 'e';
		}
	}
	printf("%s",a);
	return 0;
}
