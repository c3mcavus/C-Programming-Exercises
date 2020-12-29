#include <stdio.h>

int main( void ){
    int x,y,z; // declare variables

    printf("Enter three different integers:: ");
    scanf("%d %d %d", &x, &y, &z);

    printf("Sum is %d\n", x + y + z);
    printf("Average is %d\n", (x + y + z)/2);
    printf("Product is %d\n", x * y *z);

    int smallest;
    smallest = x;

    if (smallest > y){
        smallest = y;
    }
    if (smallest > z){
        smallest = z;
    }
    printf("Smallest is %d\n", smallest);

    int largest;
    largest = x;

    if (largest < y){
        largest = y;
    }
    if (largest < z){
        largest = z;
    }
    printf("Largest is %d\n", largest);
}
