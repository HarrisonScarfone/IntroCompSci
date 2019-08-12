
/*Name: Harrison Scarfone
 *Student Number: 104900846
 *Date: November 26 2017
 *Course: 60140
 *Description: Create a file that simulates data, read that data in and print a formatted, sorted table
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*create int value for month and then day - called in prepare_data*/
void month_day(FILE *f){
	
	int day;
	int month = rand() % 12 + 1;
	fprintf(f, "%d\r\n", month);

	if(month == 2){
		day = 28;
	}else if(month < 8){
		if(month % 2 != 0){
			day = 31;
		}else{
			day = 30;
		}
	}
	else if(month >= 8){
		if(month % 2 != 0){
			day = 30;
		}else{
			day = 31;
		}
	}

	fprintf(f, "%d\r\n", rand() % day + 1);
}

/*creates a txt file in working directory - each value is its own line - calls month_day*/
int prepare_data(){

	FILE *f;

	f = fopen("simulated_data.txt",  "w+");
	
	int n = rand() % 5 + 10;
	int x;

	for(x = 0; x <= n; x++){
		fprintf(f, "%d\r\n", rand() % 15 + 5);
		fprintf(f, "%f\r\n", (float)(rand() % 20000)/(float)100);
		month_day(f);
		fprintf(f, "%d\r\n", rand() % 17 + 2000);
	}

	fclose(f);
	return n;
}

/*define a structure to be used for array of input*/
struct Item {
	int itemid;
	float price;
	int d;
	int m;
	int y;
};

/*compare function argument for qsort, returns values in ascending order
 *bases the sort on itemid */
int compare_logic(const void *item1, const void *item2){
 	struct Item *i1 = (struct Item *)item1;
 	struct Item *i2 = (struct Item *)item2;
 	return (i1->itemid - i2->itemid);
}

/*sorts items[] with built in qsort functionS
 *prints out data looping through structured array*/
void print_data(struct Item items[], int num_items){

	printf("Item\t\tPrice\t\tDate\n\n");
	struct Item item;

	qsort(items, num_items, sizeof(struct Item), compare_logic);

	for(int i = 0; i < num_items; i++){
		item = items[i];
		printf("%2d\t\t$%6.2f\t\t%2d/%2d/%d\n", item.itemid, item.price, item.d, item.m, item.y);
	}
}

/*open txt file - read in structured array items with the returned value from prepare_data number of elements
 *calls print_data*/
void obtain_data(int create_rows){

	struct Item items[create_rows];

	FILE *f;
	f = fopen("simulated_data.txt", "r");
	float  value;

	for(int entry = 0; entry < create_rows; entry++){

		struct Item item;

		fscanf(f, "%f", &value);
		item.itemid = (int)value;
		fscanf(f, "%f", &value);
		item.price = (float)value;
		fscanf(f, "%f", &value);
		item.d = (int)value;
		fscanf(f, "%f", &value);
		item.m = (int)value;
		fscanf(f, "%f", &value);
		item.y = (int)value;

		items[entry] = item;

	}
	fclose(f);
	print_data(items, create_rows);
}

int main(){

	srand(time(NULL));
	obtain_data(prepare_data());
	
	return 0;
}
