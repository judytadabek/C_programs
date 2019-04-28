#include <stdio.h>
int main ()
{
	char one, two, three, four;
	char s[100];
	scanf ("%[^\n]", s);
	
	printf(" string is '%s' \n", s);


	printf ("Enter your four characters:");
	scanf(" %c %c %c %c", &one, &two, &three, &four);
	printf("Are they your characters?\n");
	printf("%c\n", four);
	printf("%c\n", three);
	printf("%c\n", two);
	printf("%c\n", one);
	
	return 0;
	
}





















