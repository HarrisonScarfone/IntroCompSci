/*Name: Harrison Scarfone
 *Date: November 26, 2017
 *Student Number: 104900846
 *Course: 60140
 *Description: write a function that returns the number of digits in a positive integer
 */

 #include <stdio.h>

/*takes an integer argument and returns the number of digits in that integer*/
int num_digits(int n){

	int num_of_digits;
	while(n > 0){
		n /= 10;
		num_of_digits++;
	}
	return num_of_digits;
}

/*The question just asked for the above function.  I wrote the main to test it, figured id leave it in.*/
int main(void){

	int positive_integer; 

	printf("Enter a positive integer: ");
	scanf("%d", &positive_integer);
	printf("%d", num_digits(positive_integer));
}