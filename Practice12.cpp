#include<stdio.h>
int main()
{
		int a, b;
	printf("input a: ");
	scanf("%d",&a);
	printf("input b: ");
	scanf("%d",&b);
	int c = a;
	a = b;
	b = c;
	printf("after swapping, a = %d, b = %d", a, b);
	return 0;
	
}
