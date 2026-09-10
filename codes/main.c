#include "isEven.h"
#include "isOdd.h"

#include <stdio.h>

int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num); //takes in number from user
    bool even = isEven(num); //creates bool instance and sets to the returned value of isEven(num)
    bool odd = isOdd(num); //creates bool instance and sets to the returned value of isOdd(num)
    if(even){ //checks if the num is even. runs following block if true
        printf("%d is even!", num); //if num is even, prints that the num is even
    }
    else if(odd){ //if the num is not even, checks if odd. If true runs following block
        printf("%d is odd!", num); //prints that the num is odd if its odd
    }

    return 0; //end main
}
