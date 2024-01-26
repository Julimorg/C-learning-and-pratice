#include<stdio.h>
int main()
{
	char name[100], address[100];
	printf("input your name: ");
	gets(name);
	printf("input your address: ");
	gets(address);
	printf("your Name is: %s\n your Address is :  %s",name,address);
	return 0;
}
