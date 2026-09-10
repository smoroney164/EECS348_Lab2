#include "isEven.h"
#include "isOdd.h"

#include <stdio.h>

int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    bool even = isEven(num);
    bool odd = isOdd(num);
    if(even){
        printf("%d is even!", num);
    }
    else if(odd){
        printf("%d is odd!", num);
    }

    return 0;
}
