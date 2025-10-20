/*
Name: Odanga Charles Muhanji
Reg No: PA106/G/28735/25
Description: A program that takes the distance traveled (in kilometers) as input and returns the total fare.
Assume the fare rate is KSh. 50 per kilometer
*/

// Header file for input output functions
#include <stdio.h>

// Function declaration of fare function 
int fare(int a ,  float distance )
{
    //the constant price is Kes 50. 
    a=50;
    
    //Collecting the input from the user
    scanf("%f", &distance);
    return(a*distance);
}


int main(){

    //Greeting and prompting the user to enter distance covered!
    printf("\n\nHello!\nEnter value of distance:  \t");
    
    //Declaration of distances
    float distance;
    //scanf("%f", &distance);
    int a,price;
    
    //Function call.
    price= fare(a, distance);
    float distance1;

    //To find the distance covered 
    distance1= price/50 ;


    printf("Your price is KES %d for %.lf km.\n\n",price, distance1);
    return 0;
}