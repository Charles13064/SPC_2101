/*
/*Name: Charles Muhanji
Registration No: PA106/G/28735/25
Description: Program that uses a for loop to print all the numbers from 100 down to 50 in descending order. 
*/


#include <stdio.h>
//the preprocessor, the stdio.h library is used to enable the usage of printf() function

int main(){

    // Declaration and Initialization of number variable
    int number = 100;

    //Number is equate to 100, the start value
    //number>=50, the terminating value in the loop
    //number--, the step value is -1 to make the value to be depreciating with 1
    //\n to mark the numbers to be printed in the next line!

    for(number=100; number>=50 ; number--){
        printf("\n%d\n", number);
    }
    return 0;
}

