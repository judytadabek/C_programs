#include <stdio.h>
int main ()
{
	float pi, radius, area, circumference;
	pi = 3.14159265;
	
	printf ("Enter the value of radius:");
	scanf("%f", &radius);
	
	area = pi *radius *radius;
	circumference = 2 *pi *radius;
	
	printf ("The area of the circle is %f and its circumference is %f\n", area, circumference);
	
	return 0;
	
}
