/*
Name: Odanga Charles Muhanji
Reg No: PA106/G/28735/25
Description: A program Prompts the user to enter the number of water units consumed, the water company charges customers based on the following consumption rules:
            i. 0–30 units → 20 KES per unit
            ii. 31–60 units → 25 KES per unit
            iii. Above 60 units → 30 KES per unit
*/

// Header file for input output functions
#include <stdio.h>
int main(){
    //Greetings to the customers and promt them to enter umber of water units consumed
    printf("\n\nHello👋, Welcome to Water units Price calculator System!");
    
    
    //Definition and declaration of customer_name variable
    char name;
    printf("\nPlease enter the Unique Identifier of the meter box; ");
    //Assumption of Validation of the number of units consumed by the user!
    scanf("%s", &name);
    printf("\n\n%s please enter the number of water units you have consumed\n\t",&name);
    /*char custName;
    printf("\n\nHello our beloved customer! What is your name\t");
    scanf("%s", &custName);*/


    //Declaration and defination of number_units variable
    int number_of_units;
    scanf("%d", &number_of_units);

    float total_bill;


    //Checking of the water  charges customers based on the consumption rules
    if (number_of_units > 0) {
        if (number_of_units <= 30) {
            total_bill = number_of_units * 20;
            printf("Your water bill is %.2f KES\n\n\n", total_bill);
        } else if (number_of_units <= 60) {
            total_bill = number_of_units * 25;
            printf("Your water bill is %.2f KES\n\n\n", total_bill);
        } else {
            total_bill = number_of_units * 30;
            printf("Your water bill is %.2f KES\n\n\n", total_bill);
        }
    }


    return 0;
}