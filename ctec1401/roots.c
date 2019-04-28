#include <stdio.h>
#include <math.h>
int main ()
{
	float a, b, c;
	
	printf("Enter the values of a, b, c: \n");
	scanf("%f %f %f", &a, &b, &c);
	
	float r1;
	
	r1 = ( -b + sqrt(b*b - 4 * a * c )) / 2 * a;
	
	float r2;
	
	r2 = ( -b + sqrt(b*b - 4 * a * c )) / 2 * a;
	
	printf("Result for first root: %f \n", r1);
	
	printf("Result for second root: %f \n", r2);
	
	
	return 0;
	
}
