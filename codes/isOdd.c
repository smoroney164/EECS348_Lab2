#include <stdio.h>

bool isOdd(int num) {
    //checks if the parameter num mod is 1 or 0. 
    //If its 1, the number is odd and function returns true. 
    //Otherwise it is even and returns false.
    if(num%2==1){ 
        return true;
    }
    else{
        return false;
    }
}