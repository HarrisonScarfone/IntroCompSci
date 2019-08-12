/*Name:Harrison Scarfone
 *Date: September 25, 2017
 *Student Number: 104900846
 *Course: 60140
 *Description:Calculates the volume of a sphere
 */
 
 #include <stdio.h>
 #define PI 3.14159265358979323846264338327950288419716939937510

 
 int main (void)
 
 {
    int radius=10;
	float volume= 4.0f/3.0f*PI*radius*radius*radius;
	
    printf("A volume of sphere with %d-meter radius is %.4f.", radius, volume);
	
  return 0;
 }
 
		