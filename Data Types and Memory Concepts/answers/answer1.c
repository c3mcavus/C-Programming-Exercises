#include <stdio.h>

int main( void ) {

    // declare variables
    int x, y, z, result;

    printf("Enter three integers:: "); // prompt
    scanf("%d%d%d", &x, &y, &z); // read three integers
    result = x * y * z; // make the transaction
    print("The product is %d " + result); // display result
} // end function main
