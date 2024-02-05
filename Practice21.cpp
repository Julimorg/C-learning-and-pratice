#include<stdio.h>
#include<Math.h>
int main()
{
	int a,b,c,x,y;
	printf("(Ax + By + C) / sqrt(x^2 +  y^2)\n");
	printf("input A: ");
	scanf("%d",&a);
	printf("input B: ");
	scanf("%d",&b);
	printf("input C: ");
	scanf("%d",&c);
	printf("input x and y: ");
	scanf("%d%d",&x,&y);
	printf("\n----------\n");
	printf("A(%d)x(%d) + B(%d)y(%d) + C(%d) / sqrt(x^2(%d) + y^2(%d)",a,b,c,x,y);
	double S = (a*x + b*y + c) / sqrt(x*x + y*y);
	printf("\nThe result is : %lf",S);
	return 0;
}
