/*Name: Harrison Scarfone
 *Student Number: 104900846
 *Course: 60140
 *Date: 11/11/2017
 *Description: 	take an input between 2 and 35
 				print that many rows, starting with a random number between 2 and 9
 				if random closer to 0, print line number random - 1 times
 				if closer to 10, print the random number spaces before, then print 10-random of input*/


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*input function*/
int ask_for_input(char *prompt, int *input){	
	printf("%s", prompt);
	scanf("%d", input);
}

/*function for case closer to 0*/
int closer_to_zero(int *input, int *number){

	int e = *number;

	do{
		if(*input > 9){
			*input += 87;
			printf("%c", *input);
			*input -= 87;
		}else{
			printf("%d", *input);
		}
	e--;
	}while(e > 1);

	printf("\n");
}

/*function for case closer to 10*/
int closer_to_ten(int *input, int *number){

	int a = *number;
	int b = 10 - *number;

	do{
		printf(" ");
		a--;
	}while(a>0);

	while(b > 0){
		if(*input > 9){
			*input += 87;
			printf("%c", *input);
			*input -= 87;
	}else{
		printf("%d", *input);
	}
	b--;
	}

	printf("\n");
}

/*main function, include random number declaration and generation*/
int main(void){

	int input_one, number;
	int input;
	srand(time(NULL));

	ask_for_input("Enter a number between 2 and 35: ", &input_one);
	
	for(input = 1; input_one >= input; input++){	
		number = rand() % 8 + 2 ;	
		printf("%d:", number);
		if(number < 5)
			closer_to_zero(&input, &number);
		else
			closer_to_ten(&input, &number);
	}

	return 0;
}
