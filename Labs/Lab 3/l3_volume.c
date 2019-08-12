/*Author: Harrison Scarfone
 *Date: October 3rd, 2017
 *Course: 60140
 *Student Number: 104900846
 *Description:
 */
 
 #include <stdio.h>
 /*need math for pow()*/
 #include <math.h>
 /*Pi not defined in math.h*/															
 #define M_PI 3.14159265358979323846
 
 int main (void) {
	/*declare variables*/
	int radius, height;
	/*declare volume as a float to show with 2 decimals*/
	float volume;															
	
	printf("Enter the radius and height (r,h) ");
	scanf("%d,%d", &radius, &height);
	
	/*intial argument*/
	if(2<=radius && radius<height)												
		printf("The volume is %.2f.", M_PI*pow(radius, 2)*height);
	/*process false return*/
	else if(radius<=2)
		printf("The radius cannot be smaller than 2.");
	else
		printf("Height has to be bigger than the radius.");
			
 return 0;
 }
	 
	 