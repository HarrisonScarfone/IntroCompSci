/*Name:Harrison Scarfone
 *Date: September 26 2017
 *Course: 06140
 *Student Number" 104900846
 *Description: Take an input (date) and give a reformatted output
 */
 
 #include <stdio.h>
 
 int main (void)
 
 {
	 
   int mm, dd, yyyy; 	
   
	printf("Enter the date (mm-dd-yyyy): ");     			/*ask for the input*/
	scanf("%d-%d-%d", &mm, &dd, &yyyy);       				/*get the input*/
	
	printf("This is the %dth day of the %dth month of the year %d.\n", dd, mm, yyyy);    /*print the date with the new format*/
		
 
return 0; 
 }