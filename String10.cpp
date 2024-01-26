#include<stdio.h>
#include<string.h>
int main()
{
	char a[100];
	printf("input the String: ");
	gets(a);
	printf("\n---------\n");
	int k;
	printf("input the position you want to delet: ");
	scanf("%d",&k);
	int len = strlen(a);
	for(int i = k;i<len-1;i++)
	{
		a[i] = a[i+1];
		break;
	}
	len--;
	printf("%s",a);
	printf("\n---------\n");

	return 0;
}
