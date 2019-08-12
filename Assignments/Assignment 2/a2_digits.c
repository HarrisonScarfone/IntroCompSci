/*Author: Harrison Scarfone
 *Student Number: 104900846
 *Date: October 10, 2017
 *Course: 60140
 *Description: Take 2 digit input and print in reverse order
 */

#include <stdio.h>
#include <math.h>

int main (void)

{
	int number, x, y;

	printf("Enter a two digit number: ");
	scanf(%d, number);

	x = number % 10
	y = number / 10 

	printf("The reverse is: %d%d", x, y);

}