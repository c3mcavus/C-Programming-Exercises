#include <stdio.h>
#include <stdlib.h>

int main( void )
{
    int num1, num2; // declare variables

    printf("Please enter the first interger: ");
    scanf("%d",&num1); // get the first integer

    printf("Please enter the second integer: ");
    scanf("%d",&num2); // get the second integer

    if (num1 > num2){
        printf("%d is greater than %d", num1, num2);
    } else if (num2 > num1){
        printf("%d is greater than %d", num2, num1);
    } else {
        printf("Numbers are same");
    }
}
