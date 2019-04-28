#include <stdio.h>
int main ()
{
	int N, sumsq;
	printf ("Enter a value for N\n");
	scanf("%i", &N);
	
	sumsq = N*(N+1)*(2*N+1)/6;
	
	printf("The sum of the squares is:%i\n", sumsq);
	
	return 0;
	
}
