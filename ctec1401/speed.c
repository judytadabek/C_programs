#include <stdio.h>
int main ()
{
	int final, initial, acceleration, time;
	printf("Enter your initial, acceleration and time:");
	scanf("%i %i %i", &initial, &acceleration, &time);
	
	final = initial + acceleration * time;
	
	printf ("The final speed is: %i\n", final);
	
	return 0;
	
}
