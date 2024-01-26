#include<stdio.h>
void input()
{
	char a[100];
	gets(a);
	printf("Hello %s",a);
}
int main()
{
	input();
	return 0;
}
