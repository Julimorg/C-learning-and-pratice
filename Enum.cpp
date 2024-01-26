#include<stdio.h>
int main()
{
	enum gender{
		male,
		female,
	};
	enum gender myGender;
	 
	 myGender = male;
	
	enum gender anotherGender = female;
	
	printf("my gender = %c ",myGender + 'A');

	 return 0;
}
