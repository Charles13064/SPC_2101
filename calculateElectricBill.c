/*
Name: Odanga Charles Muhanji
Reg No: PA106/G/28735/25
Description:A C programm having a function called calculateElectricBill() that takes the number of units
consumed as input and returns the total bill amount based on the following rates:
        ▪ For the first 100 units → KSh. 10 per unit
        ▪ For the next 100 units → KSh. 15 per unit
        ▪ Above 200 units → KSh. 20 per unit
Example: If 250 units are consumed, the total bill s

*/

#include <stdio.h>

//Function to calculate the total electricity bill
//Function defination
float calculateElectricBill(float units_consumed)
{
    //Gretting the user and requsting them to enter number of electricity units consumed
    printf("\n\nHello! Enter number of electric units consumed:\t");
    scanf("%f", &units_consumed);

    //FINAL RESULT TO BE STORED in total_cost variable as a float value
    float total_cost;

    //For the first 100 units → KSh. 10 per unit
    if (units_consumed >= 0 && units_consumed <= 100)
    {
        total_cost = units_consumed * 10;
    }

    //For the next 100 units → KSh. 15 per unit
    else if (units_consumed >100 && units_consumed <= 200)
    {
    
        total_cost = 1000 + 15 * (units_consumed - 100);
    }

    //Above 200 units → KSh. 20 per unit
    else
    {    
        total_cost = 1000+1500 + (20 * (units_consumed-200));
    }
            
    printf("Total electricity bill is Ksh. %.2f\n\n",total_cost );
    return(total_cost);
}



//main function

int main()
{
    float units_consumed, bill;

    //Function call
    bill=calculateElectricBill(units_consumed);
    return 0;
}