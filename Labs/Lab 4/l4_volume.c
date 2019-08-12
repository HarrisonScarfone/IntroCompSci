/*Name: Harrison Scarfone
 *Student Number: 104900846
 *Date: October 22, 2017
 *Course: 60140
 *Description: Emulate the flowchart done in l4_volume.rap */

#include <stdio.h>
#include <math.h>
#define M_PI 3.14159265358979323846
/*prepare an input function*/
int ask_get_height(char *ask, float *height){
	printf("%s", ask);
	scanf("%f", height);
}

int main(void){
	float radius, height, volume;
	radius = 5.0f;
	/*start loop, call input and check for exit case*/
	while(ask_get_height("Enter the height (0 to exit): ", &height) && height !=0){
		if(height>radius)
			printf("The volume is: %.2f\n", volume = M_PI * pow(radius, 2)*height);
		else
			printf("The height has to be bigger than the radius.\n");
	}	

	printf("Thank you for using my software.");
	return 0;
}
