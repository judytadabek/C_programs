#include <stdio.h>
int main ()
{
	int N, sumcubes;
	printf ("Enter a value for N\n");
	scanf("%i", &N);
	
	sumcubes = (N*N*(N+1)*(N+1))/4;
	
	printf("The sum of the first %i cubes is:%i\n", N, sumcubes);
	
	return 0;
	
}
