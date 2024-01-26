#include<stdio.h>
int main()
{
	int min;
	double year;
	double day;
	
	printf("input the minutes: ");
	scanf("%d",&min);
	printf("\n------------\n");
	double minDay ;
	minDay = ( 24 * 60);
	day = (min / minDay);
	printf("the Day you have is: %.3f days", day);
	printf("\n------------\n");
	double minYear;
	minYear = (365 * 24 * 60);
	year = ( min / minYear);
	printf("the Year you have is: %.3f years ", year);
	


	return 0;
}
