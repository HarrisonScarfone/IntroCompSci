/*Name:Harrison Scarfone
 *Date: 11/11/2017
 *Student Number: 104900846
 *Course: 60140
 *Description: create an array of random numbers and sum the rows and columns */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
	
	int random_array[5][5];
	int column, row, random_number;
	int sum_rows_row, sum_rows_column;
	int sum_columns_row, sum_columns_column;
	int rows_sum = 0;
	int columns_sum = 0;

	for(row = 0; row < 5; row++){
		printf("Row %d: ", row+1);
		for (column = 0; column < 5; column++){
			random_number = rand() % 24;
			random_array[row][column] = random_number;
			printf("\t%d", random_array[row][column]);
		}
		printf("\n");
	}	

	printf("Row totals: ");

	for(sum_rows_row = 0; sum_rows_row < 5; sum_rows_row++){
		for(sum_rows_column = 0; sum_rows_column < 5; sum_rows_column++){
			rows_sum += random_array[sum_rows_row][sum_rows_column];
		}

		printf("\t%d", rows_sum);
		rows_sum = 0;
	}

	printf("\nColumn totals: ");

	for(sum_columns_column = 0; sum_columns_column < 5; sum_columns_column++){
		for(sum_columns_row = 0; sum_columns_row < 5; sum_columns_row++){
			columns_sum += random_array[sum_columns_row][sum_columns_column];
		}

		printf("\t%d", columns_sum);
		columns_sum = 0;
	}
	
}

