/*
Name: Odanga Charles Muhanji
Reg No: PA106/G/28735/25
Description: A program that that takes temperature in Fahrenheit as input and returns the temperature in Celsius.
Use the formula:
                                5
                𝐶 = (𝐹 − 32) ×  /
                                9
*/

// Header file for input output functions
#include <stdio.h>



//declaration and defination of conversion
int convertTemp(float f){
    //declation and defination of c and f variables: c ~ temp in celcious and f ~ temp in Fahrenheit.v  
    float c, temperature;
        
    printf("\n\nEnter value of temperature, should be in Fahrenheit:  ");
    scanf("%f", &f);//Input from the user stored in f variable

    //Conversion of Fahrenheit to °C
    float result = 5.0/9.0;
    c=(f-32)*result;
    //printf("\n%.8f\n\n", c);
    temperature=c;

    printf("The temperature approximately %.2f °C. \n\n",temperature);     

    return(c);
}


//main function
int main(){

    //initialization of variables used! 
    float temperature, f;
    
    //to call convertTemp() funtion
    temperature = convertTemp(f); 
    return 0;
}