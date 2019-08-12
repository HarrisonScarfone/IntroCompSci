/*Name: Harrison Scarfone
 *Date: November 26, 2017
 *Student Number: 104900846
 *Course: 60140
 *Description: write a function that returns the number of digits in a positive integer
 */

#include <stdio.h>
#include <math.h>

/*function to calculate the value of the given polynomial with a number for an argument, returns polyn value*/
double compute_value(double x){
	return 3 * pow(x, 5) + 2 * pow(x, 4) - 5 * pow(x, 3) - pow(x, 2) + 7 * x - 6;
}

int main(void){

	double n;
	printf("Enter a value for x: ");
	scanf("%lf", &n);
	printf("The value of the polynomial is: %.0lf", compute_value(n));

	return 0;
}