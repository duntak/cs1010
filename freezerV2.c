/*
 *  freezerV2.c
 *  Unit 3 Exercise 6: Estimate temperature in a freezer
 *  given the elapsed time since power failure.
 *  New formula: T = (4*t^10 / (t^9+2)) - 20
 */
#include <stdio.h>
#include <math.h>

int main(void) {
	int hours, minutes;
	float temperature;  // Temperature in freezer
	float t;	//Time in Hour and Minutes

	// Get the hours and minutes
	printf("Enter hours and minutes since power failure: ");
	//scanf("%d %d", &hours, &minutes);

	t = hours+minutes/60.0;

	temperature = (4* pow(t,10)/ (pow(t,9)+2)) - 20;
	
	printf("Temperature in freezer = %.2f\n",temperature);

	return 0;
}

