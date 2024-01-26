#include<stdio.h>
#include<string.h>
int main()
{
	char c;
	char s[100];
	printf("input String: ");
	gets(s);
	printf("input KeyWord: ");
	scanf("%c",&c);
	int len = strlen(s);
	int position = -1;
	for(int i = 0 ; i<len;i++)
	{
		if(s[i] == c)
		{
			position = i;
			
		}
	}
	printf("%c is in position: %d ",c,position);
	return 0;
}
