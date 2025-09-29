/*
Name: Odanga Charles Muhanji
Reg No: PA106/G/28735/25
Date: 30 th September 2025
Description: A program that Write a C program that:
    the menu          Option Bundle Cost (KES)
                            1 100 MB 50
                            2 500 MB 200
                            3 1 GB 350
                            4 2 GB 600

        1. Displays the menu above.
        2. Asks the user to enter their choice (1–4).
        3. Uses a switch statement to display the bundle selected and its cost.
        4. Displays “Invalid choice” if the user enters a number outside 1–4
*/

#include <stdio.h>
int main(){
    //Outing the I.S.P name and offers
    printf("\n\n\tHello, welcome to Local Mobile Service Provider Offers\n ");
    printf("\tBelow is our offers!!\n");
    //Outputting the bundle offers on a table
    
    printf("      -----------------------------------\n");
    printf("| Option     |      Bundle         | Cost(KES) |\n");
    printf("------------------------------------------------\n");
    printf("|    1       |      100 MB         |   50      |\n");
    printf("------------------------------------------------\n");
    printf("|    2       |      500 MB         |   200     |\n");
    printf("------------------------------------------------\n");
    printf("|    3       |      1 GB           |   350     |\n");
    printf("------------------------------------------------\n");
    printf("|    4       |      2 GB           |   600     |\n");
    printf("------------------------------------------------\n");

    //To the user to enter their choice (1–4).
    //Defination and declaration of choice variable
    int choice=0;
    printf("From the options above please choose the number of the option (1-4) representing your choice:\n");
    //Collecting the choice from user
    scanf("%d", &choice);

    //Matching the price according to collected value from the choice from user using if and switch and else
    
    if (choice==1 || choice==2 || choice ==3 || choice == 4) {
        switch (choice)
            {
            case 1:
                printf("You have selected 1. 100MB @ 50 KES\n\n");
                //Giving thanks to the user 
                printf("_______Thank you for using our services_______\n\n");
                break;

            case 2:
                printf("You have selected 2. 5200MB @ 200 KES\n\n");
                //Giving thanks to the user
                printf("_______Thank you for using our services_______\n\n");
                break;

            case 3:
                printf("You have selected 3. 1GB @ 350 KES\n\n");
                //Giving thanks to the user
                printf("_______Thank you for using our services_______\n\n");                
                break;

            case 4:
                printf("You have selected 4. 2GB @ 600 KES\n\n");
                //Giving thanks to the user
                printf("_______Thank you for using our services_______\n\n");
                break;
            }

    //Prints when the user has not input the correct number to conciding to their choice from the table            
    } else {
        printf("⛔⛔ Invalid choice your choice should be between 1-4\n\n\n");
    }

    
    return 0;
}