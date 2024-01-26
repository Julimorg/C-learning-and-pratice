#include<stdio.h>
#include<string.h>
int main()
{
	char a[100];
	printf("input String: ");
	gets(a);
	int len = strlen(a);
	for(int i = 0 ;i < len ;i++)
	{
		if(a[i] >= 'A' && a[i] <= 'Z')
		{
			a[i] += 32;
		 } 
	}
	printf("%s",a);
	return 0;
}
