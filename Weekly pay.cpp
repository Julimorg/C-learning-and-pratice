//Enter the num of the hours worked in week in via the keyboard
//display as output the gross pay, the taxes, and the net pay
//assumptions shoud be made:
//pay rate = $12.00/h
//OT ( in excess of 40 hours ) = time and a half
//tax rate:
//	15% of the first 300$
//	20% of the next 150$
//	25% of the rest
#include<stdio.h>
#include<stdlib.h>

#define PAYRATE  12.00
#define TAXRATE_300 .15
#define TAXRATE_150 .20
#define TAXRATE_REST .25
#define OT 40 

int main()
{
	int hr;
	double grosspay = 0.0 ;
	double taxes = 0.0;
	double netPay = 0.0;
	printf("Input the hours worked in a week: ");
	scanf("%d",&hr);
	//GROSS PAY
	if( hr <= 40)
	{
		grosspay = hr * PAYRATE;
	}
	else 
	{
		grosspay = 40 * PAYRATE;
		double overTimePay = ( hr - 40 ) * (PAYRATE *  1.5);
		grosspay += overTimePay;
	}
	// Taxes Pay
	if ( grosspay <= 300)
	{
		taxes = grosspay * TAXRATE_300;
	}else if( grosspay > 300 && grosspay <= 450)
	{
		taxes = 300 * TAXRATE_300;
		taxes += (grosspay - 300) * TAXRATE_150;		
	}
	else 
	{
		taxes = 300 * TAXRATE_300;
		taxes += 150 * TAXRATE_150;
		taxes += (grosspay - 450) * TAXRATE_REST;
	}
	// Net Pay
	netPay = grosspay - taxes;
	
	printf("Your gross pay: %.2f\n",grosspay);
	printf("Your taxes pay: %.2f\n",taxes);
	printf("Your net pay:  %.2f\n",netPay);
	
	return 0;
	
	
}
