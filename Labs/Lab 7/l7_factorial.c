/*Name:Harrison Scarfone
 *October 30 2017
 *Student Number: 104900846
 *Course: 60140
 *Description: Calculate and out a factorial from a given input
 */


#include <stdio.h>
#include <float.h>

int main(void){

	long double digit;
	long double factorial = 1;
	int positiveInteger;

	printf("Enter a positive integer: ");
	scanf("%Lf", &positiveInteger);

while(positiveInteger >= 0){
	
	for(digit = positiveInteger; digit > 0; digit--){
		
		factorial *= digit;
	}

		factorial != 0 ? factorial : 1;	

		printf("Factorial of %Lg: %hu (short, size = 2)\n", positiveInteger, (short int)factorial);
		printf("Factorial of %Lg: %hu (unsigned short, size = 2)\n", positiveInteger, (unsigned short int)factorial);
		printf("Factorial of %Lg: %d (int, size = 4)\n", positiveInteger, (int)factorial);
		printf("Factorial of %Lg: %u (unsigned int, size = 4)\n", positiveInteger, (unsigned int)factorial);
		printf("Factorial of %Lg: %ld (long, size = 4)\n", positiveInteger, (long int)factorial);
		printf("Factorial of %Lg: %lu (unsigned long, size = 4)\n", positiveInteger, (unsigned long int)factorial);
		printf("Factorial of %Lg: %lld (long long, size = 8)\n", positiveInteger, (long long int)factorial);
		printf("Factorial of %Lg: %llu (unsigned long long, size = 8)\n", positiveInteger, (unsigned long long int)factorial);
		printf("Factorial of %Lg: %Lg (long double, size = 12)\n", positiveInteger, factorial);

	factorial = 1;
	printf("Enter a positive integer: ");
	scanf("%Lf", &positiveInteger);
	}

	printf("Thank you for using my software.");

	return 0;
}

/* The following integers fail when the number become to large for the variable to store:

	short:				7
	unsigned short:		8
	int:				12
	unsinged int: 		12
	long int:			20
	unsigned long int:	20
	long long int:		49
	unsigned long long: 49
	long double:		1754*/

/* unsigned long int failure can be tested with long int by taking 2*long int failure, accounting for the extra bit available.*/
