/*Name:Harrison Scarfone
 *October 30 2017
 *Student Number: 104900846
 *Course: 60140
 *Description: Calculate and out a factorial from a given input
 */


#include <stdio.h>

/*introduce input function*/
int ask_and_store(char *phrase, int *positiveInteger){
	printf("%s", phrase);
	scanf("%d", positiveInteger);
}

int calculate_factorial(int *positiveInteger){

	int digit;
	int factorial = 1;

	
	for(digit = *positiveInteger; digit > 0; digit--){
		factorial *= digit;
	}

	positiveInteger > 0 ? *positiveInteger = factorial : 1;
}


int main(void){

	int positiveInteger;

	while(ask_and_store("Enter a postive integer (-ve integer to exit): ", &positiveInteger) && positiveInteger >= 0){
		printf("Factorial of %d: %d\n", positiveInteger, calculate_factorial(&positiveInteger));
	}

	printf("Thank you for using my software :) -");

	return 0;
}

