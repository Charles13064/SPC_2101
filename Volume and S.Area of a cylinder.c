/*
Author: Odanga Charles Muhanji
Reg No: PA106/28735/25
Description: Program computing the area and volume of a cylinder
*/

#include <stdio.h>
// Creation of a constant representing value of pi
#define PI 3.142

//Requesting user to enter the dimensions of the cylinder
int main(){
    // Defination and declaration of the input variables, r= radius, and h=height of the cylinder
    float r,h;
    
    //Sentence telling the user the program is assuming the values entered are in centimeters
    printf("Note that the values entered are assumed to be in centimeters!");

    //input of radius
    printf("Hello👋! Happy to have you today!\nEnter the value of the radius\n");
    scanf("%f",&r);

    //input of height
    printf("Now enter the value of height below\n");
    scanf("%f",&h );
    

    //calculation of volume
    float volume = PI * r * r * h;
    printf("\nVolume of the cylinder having the radius of %.2f cm and height of %.2f cm is %.4f cm3 ", r, h ,volume);

    //Calculation of Surface Area 
    float surface_area = ( 2 * PI * r * r ) + ( 2 * PI * r * h);
    printf("\n\n\nSurface Area of the cylinder having the radius of %.2f cm and height of %.2f cm is %.4f cm2 ", r, h , surface_area);
    return 0;
}
