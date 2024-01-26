#include<stdio.h>
int main()
{
	enum Company{
		Google,
		Facebook,
		Xerox,
		Yahoo = 10,
		Ebay,
		Microsoft = 12,
	};
	
	enum Company xerox  = Xerox;
	enum Company google = Google;
	enum Company ebay = Ebay;
	
	printf("The value of xerox : %d\n ", xerox);
	printf("The value of google : %d\n ", google);
	printf("The value of ebay : %d\n ", ebay);
	return 0;
}
