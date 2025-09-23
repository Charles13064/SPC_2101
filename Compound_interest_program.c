/*
Author: Odanga Charles Muhanji
Reg No: PA106/28735/25
Description: Program computing the the compound interest of user
*/

#include <stdio.h>

// because we'll have to power th rate/100, we have to incluse math.h library
#include <math.h>
int main(){
    // variable declaration
    double principle, rate, time;
    //wecoming the user to the program
    printf("Hello, welcome to this application. Happy to have you!");

    //requsting the user to enter their principle value
    printf("\n\nPlease enter principle value\n");
    scanf("%lf", &principle);

    // User to enter the rate
    printf("\n\nPlease enter rate.\nRemember that the rate is assumed to be in percentage!\n");
    scanf("%lf", &rate);

    // User to enter the time
     printf("\n\nPlease enter time.\nRemember that the time is assumed to be in years!\n");
    scanf("%lf", &rate);

    //Variable declation of "compound_interest"
    double compound_interest;
    compound_interest= principle * (1 + pow(rate/100 ,time ));
    printf("The compund interest is; ");
    printf("Ksh. %.2lf\n\n",compound_interest);
    return 0;


}
