#include <stdio.h>
int main ()
{
	int a;
	printf("Enter an integer value:\n");
	scanf("%i", &a);

	if (a%2==0)
	printf("EVEN\n");
	else
	printf("ODD\n");

	return 0;

}
