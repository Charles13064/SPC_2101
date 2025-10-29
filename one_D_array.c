/*
Name: Odanga Charles Muhanji
Reg No: PA106/G/28735/25
Date: 27 th October 2025
Description: A C program for a hotel that records its total revenue for each day of the week (7 days).
    1. A 1D array revenue[7] that stores the daily revenues.
    2. The revenue for each day is input into the system.
    3. The program calculates and displays:
        • The total weekly revenue.
        • The average daily revenue.
*/


#include <stdio.h>
#include <string.h>
//Main funtion
int main()
{   
    //Declararion  of array storing daily revenues
    int revenue[7];
    


    //Declararion  of array outputting day of the week daily revenues  
    //7~ space for days in a week, 20 holding upto 20 ~  each string can hold upto 20 letters
    char array_day[7][20] = {"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};
 
    //Calculation od the size of array_day
    int size= sizeof(array_day)/sizeof(array_day[0]);

    
    //Declaration and initialization of total revenue for the week to 0
    int total_revenue = 0;
    //Declaration and initialization of total revenue for the week to 0
    int avarage = 0;

    //A loop to display and enable the use to input the revenue collected by the user each day
    for (int i = 0; i < 7; i++) 
    {
        printf("\n\nEnter revenue for %s\n", array_day[i]);
        scanf("%d", &revenue[i]);
        
        // Add each revenue entry to total_revenue
        total_revenue += revenue[i];
        //FInding the avarage revenue for the week
        avarage = total_revenue/ size;

        //Condition to stop the loop when the day of the week is Sunday
        if (strcmp(array_day[i], "Sunday") == 0) {
            break;
        }
    }

    // Print the total revenue for the week
    printf("\nTotal weekly revenue : \nKsh. %d\n", total_revenue);
    // Print the total revenue for the week
    printf("\nAvarage weekly revenue : \nKsh. %d\n", avarage);


    return 0;   

}
