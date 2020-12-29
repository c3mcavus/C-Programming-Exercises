#include <stdio.h>

int main( void ){
    int x,y; //declare variables

    printf("Enter two numbers:: "); //prompt
    scanf("%d %d", &x, &y); // read the line

    if (x > y){
        printf("%d is larger.", x);
    } // end if
    if (y > x){
        printf("%d is larger.", y);
    } // end if
    if (x == y){
        printf("These numbers are equal.");
    } // end if
}
