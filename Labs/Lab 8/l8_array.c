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

int main(void){

	int width, height;
	srand(time(NULL));

	printf("Range: 9 < w < 21, 2 < h < 62\n");

	do{
		printf("Enter width and height: ");
		scanf("%d %d", &width, &height);
	}while(width < 10 || width > 20 || height < 3 || height > 61);
	
	
	int a[height];
	int number, random_number;
	int width_by_two = width / 2;

	for(number = 0; number < height; number++){

		random_number = rand() % (width - 2) + 3;
		a[number] = random_number;
		int r = random_number;
		int s = random_number;
		int t = number + 1;
		int u = width - random_number;

		printf("%d:\t", random_number);

		if(random_number >= (width / 2)){
			while(r > 1){
				printf(" ");
				r--;
			}
		}

		if(t >= 10){
			if(t < 36){
				t += 55;
			}else{
				t += 61;
			}
		}
		if(t>9){
			if(s < (width / 2)){
				while(s > 1){
					printf("%c", t);
					s--;
				}
			}else{
				while(u >= 0){
					printf("%c", t);
					u--;
				}
			}
		}else{
				if(s < (width / 2)){
				while(s > 1){
					printf("%d", t);
					s--;
				}
			}else{
				while(u >= 0){
					printf("%d", t);
					u--;
				}
			}
		}

		printf("\n");

	}

	int x;
	int tally = 0;
	int tally_check = 0;

	for(x = 0; x < height; x++){
		tally_check++;
		if(a[x] == width_by_two)
			tally++;
	}
	
	float percentage = (float)tally / (float)height * 100;

	printf("Among %d numbers, the percentage of %d is %.2f%c.", tally_check, width_by_two, percentage, 37);

	return 0;

}