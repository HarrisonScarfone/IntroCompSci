/*Name: Harrison Scarfone
 *Student Number: 104900846
 *Date: November 26 2017
 *Course: 60140
 *Description: calculate the cost of parking for each customer using a function call
 */

#include <stdio.h>

/*display prompt and store input*/
void take_input(char *prompt, float *hours_car1, float *hours_car2, float *hours_car3){
	printf("%s", prompt);
	scanf("%f %f %f", &*hours_car1, &*hours_car2, &*hours_car3);
}

/*calculate the charge for a car with the argument of hours*/
float calculate_charge(float hours){

	float cost = 2.0;
	
	while(hours > 3.0){
		cost += 0.5;
		hours -= 1.0;
	}

	return cost < 10.0 ? cost : 10.0;
}

/*prints a formatted table and makes the rest of the calculations necessary to do so*/
void print_table(float *hours_car1, float *hours_car2, float *hours_car3){
	
	float cost_car1, cost_car2, cost_car3, total_hours, total_cost;
	cost_car1 = calculate_charge(*hours_car1);
	cost_car2 = calculate_charge(*hours_car2);
	cost_car3 = calculate_charge(*hours_car3);
	total_hours = *hours_car1 + *hours_car2 + *hours_car3;
	total_cost = cost_car1 + cost_car2 + cost_car3;

	printf("\tCar\t\t\tHours\t\t\tCharge\n");
	printf("\t1\t\t\t%.1f\t\t\t%.2f\n", *hours_car1, cost_car1);
	printf("\t2\t\t\t%.1f\t\t\t%.2f\n", *hours_car2, cost_car2);
	printf("\t3\t\t\t%.1f\t\t\t%.2f\n", *hours_car3, cost_car3);
	printf("TOTAL\t\t\t\t%.1f\t\t\t%.2f\n", total_hours, total_cost);
}

int main(void){

	float hours_car1, hours_car2, hours_car3;
	take_input("Enter the hours parked for 3 cars: ", &hours_car1, &hours_car2, &hours_car3);
	print_table(&hours_car1, &hours_car2, &hours_car3);

	return 0;
}
