#include <stdio.h>
int main ()
{
	int N, sum;
	
	printf("Enter a value for N:");
	scanf("%i", &N);
	
	sum = N*(N+1)/2;
	
	printf("The sum from 1 to %i is %i\n", N, sum);
	
	return 0;
	
}
