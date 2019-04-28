#include <stdio.h>
int main ()
{
	char character_variable;
	int shift;
	
	//character_variable;
	shift = 4;
	
	printf("%c%c \n", character_variable, character_variable + shift);
	
	
	printf ("Enter ur message: \n");
	scanf ("%c", &character_variable);
	
	printf ("%c \n", (((character_variable - 'a')+ shift ) % 26) + 'a');
	
	
	//printf("Enter the message: \n");
	//scanf ("%d", &abcd);
	
	//printf("Your encrypted message: %d", abcd);
	
	return 0;
	
}
