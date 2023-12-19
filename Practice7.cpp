#include<stdio.h>
int main()
{	
	double a ,b;
	printf("Input num a:");
	scanf("%lf", &a);
	printf("Input num b: ");
	scanf("%lf",&b);
	double area = a*b;
	printf("Area = %f",area);
	return 0;
}