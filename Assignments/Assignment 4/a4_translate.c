/*Name:Harrison Scarfone
 *Date: 11/11/2017
 *Student Number: 104900846
 *Course: 60140
 *Description: take an alphabeitc phone number and convert to digits*/


 
#include <stdio.h>
#include <string.h>

int main(void){

	char alpha_number[50];
	int length = sizeof(alpha_number);
	int r;

	printf("Enter an alphabetic phone number: ");
	scanf("%s", alpha_number);
	printf("The translation of %s is: ", alpha_number);


	for(r = 0; r < length; r++){		

	switch(alpha_number[r]){

		case 'A': case 'B': case 'C':
			printf("2");
			break;
		case 'D': case 'E': case 'F':
			printf("3");
			break;
		case 'G': case 'H': case 'I':
			printf("4");
			break;
		case 'J': case 'K': case 'L':
			printf("5");
			break;
		case 'M': case 'N': case 'O':
			printf("6");
			break;
		case 'P': case 'Q': case 'R': case 'S':
			printf("7");
			break;
		case 'T': case 'U': case 'V':
			printf("8");
			break;
		case 'W': case 'X': case 'Y': case 'Z':
			printf("9");
			break;
		default:
			break;			
		}
	}
	
	
	return 0;
}