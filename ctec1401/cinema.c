#include <stdio.h>
int main ()
{
	float number_adults, number_children, adults_ticket, children_ticket;
	adults_ticket = 20;
	children_ticket = 10;
	
	printf("Enter how many adults and children are going to the cinema:\n");
	scanf("%f \n %f", &number_adults, &number_children);
		
	printf("The total cost for tickets to the cinema is: %f \n", number_adults * adults_ticket + number_children * children_ticket);
		
		
	return 0;
		
}
