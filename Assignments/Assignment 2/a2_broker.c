/*Author: Harrison Scarfone
 *Student Number: 104900846
 *Date: October 10, 2017
 *Course: 60140
 *Description: Calculate commision for a broker
 */

#include <stdio.h>

int main (void){
	
	float shares, pricePerShare, value, commission, rivalCommission;
	
	printf("Enter the number of shares: ");
	scanf("%f", &shares);
	printf("Enter the price per share: ");
	scanf("%f", &pricePerShare);

	value = shares * pricePerShare;
	/* calculate the commision based on the trade */
	if (value < 2500)
		commission = 30.00f + .17f * value;
	else if (value < 6250.00f)
		commission = 56.00f + 0.0066f * value;
	else if (value < 20000.00f)
		commission = 76.00f + 0.0034f * value;
	else if (value < 50000.00f)
		commission = 100.00f + 0.0022f * value;
	else if (value < 500000.00f)
		commission = 155.00f + 0.0011f * value;
	else 
		commission = 255.00f + 0.0009f * value;
	/*check commission is above the minimum and print an output */
	printf("Broker's Commission: %.2f\n", commission < 39.00f ? 39.00f : commission);
	printf("Rival Broker's Commission: %.2f\n", shares < 2000 ? 33.00f + 0.03 * shares : 33.00f + 0.02 * shares);

	return 0;

}

