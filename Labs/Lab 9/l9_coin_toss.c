/*Name: Harrison Scarfone
 *Student Number: 104900846
 *Date: November 26 2017
 *Course: 60140
 *Description: simulate a coin toss and print stats after
 */

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/*coin toss, returns 0 or 1*/
int coin_toss(void){
	return rand() % 2;
}

int main(void){

	srand(time(NULL));
	int toss_number, flip_number;
	int outcomes[100];
	int new_line = 2;
	int heads = 0;
	int tails = 0;

	for(toss_number = 0; toss_number < 100; toss_number++ && new_line++){

		outcomes[toss_number] = coin_toss();
		if(outcomes[toss_number] == 0){
			printf("Tails  ");
		}else{
			printf("Heads  ");
		}
		if(new_line == 10){
			printf("\n");
			new_line = 0;
		}
	}

	for(flip_number = 0; flip_number < 100; flip_number++){
		if(outcomes[flip_number] == 0){
			tails++;
		}else{
			heads++;
		}
	}

	printf("\nThe total number of Heads was %d.\n", heads);
	printf("The total number of Tails was %d.\n", tails);

	return 0;
}