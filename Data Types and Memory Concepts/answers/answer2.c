#include <stdio.h>

int main ( void ){

    int x, y; // declare variables

    printf("Enter two numbers:: "); // prompt
    scanf("%d%d", &x, &y); //read integers

    printf( "The sum is %d\n", x + y );
    printf( "The product is %d\n", x * y );
    printf( "The difference is %d\n", x - y );
    printf( "The quotient is %d\n", x / y );
    printf( "The remainder is %d\n", x % y );
}
