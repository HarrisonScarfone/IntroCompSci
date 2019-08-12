/*Name:Harrison Scarfone
 *Date:October 28 2017
 *Student Number: 104900846
 *Course: 60140
 *Description: Take an integer input and give the reverse as ouput*/


/*This program will only reverse numbers where digits <= 9 due to the restrictions on int. Assuming this is acceptable
 *within the scope of this assignment*/

#include <stdio.h>

/*introduce input function*/
int ask_and_store(char *phrase, int *number){
	printf("%s", phrase);
	scanf("%d", number);
}

/*reverse the number function*/
int reverse_the_number(int *number){
	
	int digit = 0;
	int reverse = 0;

	do{
		reverse *= 10;
		digit = *number % 10;
		reverse += digit;
		*number /= 10;

	}while(*number > 0);

	*number = reverse;
}

/*start main function*/
int main(void){

	int number;
	ask_and_store("Enter a number: ", &number);

	if(number <= 0 || number > 999999999)
		printf("Invalid input!\n");
	else if(number < 10)
		printf("No need to reverse the number.\n");
	else{
		reverse_the_number(&number);
		printf("%d\n", number);
	}

	printf("Thank you for using the software.");

	return 0;
}
