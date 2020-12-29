#include <stdio.h>

int main( void ){
    int x, y, z; // declare variables

    printf("Enter three different integers:: "); // prompt
    scanf("%d %d %d", &x, &y, &z); // read the line

    int smallest = x; // declare variable

    if (smallest > y){
        smallest = y;
    } // end if
    if (smallest > z){
        smallest = z;
    } // end if

    int largest = x; // declare variable

    if (largest < y){
        largest = y;
    } // end if
    if (largest < z){
        largest = z;
    } // end if

    printf("Smallest is %d\n", smallest); // print the smallest
    printf("Largest is %d\n", largest); // print the largest
} // end function main
