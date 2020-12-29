#include <stdio.h>

int main( void ){
    int integer; // declare variable

    printf("Enter a integer:: "); // prompt
    scanf("%d",&integer); // read the line

    if (integer % 2 == 0){
        printf("%d is an even integer.\n", integer);
    }
    if (integer % 2 != 0){
        printf("%d is an odd integer.\n", integer);
    }
}
