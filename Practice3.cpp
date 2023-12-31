#include<stdio.h>
int main()
{
	char a[20];
	printf("Your name: ");
	scanf_s("%s", &a);
	int b;
	printf("Your age: ");
	scanf_s("%d", &b);
	char c[20];
	printf("\n-----------\n");
	printf("Your Friend Name:");
	scanf("%s", &c);
	int d;
	printf("Your Friend age: ");
	scanf_s("%d", &d);
	if (b > d)
	{
		printf("%s is older than %s", a, c);
	}
	else if (b == d)
	{
		printf("%s is equal with %s", a, c);
	}
	else
	{
		printf("%s is younger than %s", a, c);
	}
	return 0;



}