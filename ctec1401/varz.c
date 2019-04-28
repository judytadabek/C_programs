#include <stdio.h>

int main()
{
    int x, z;
    //int sum, product, diff, ssquare;
    //sum = x + z;
    //product = x * z;
    //diff = x - z;
    //ssquare = (x*x)+(z*z);
    
    printf("Input the value of x and z: ");
    
    scanf(" %i%i", &x, &z);
    printf("Sum of x + z: %i", x + z);
    printf("Product of x and z is: %i", x *z);
    printf("The difference of x and z is: %i", x-z);
    printf("The sum of squares is: %i", x*x+z*z);
    return 0;
}
