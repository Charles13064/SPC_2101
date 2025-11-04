/*
Name: Odanga Charles Muhanji
Reg No: PA106/G/28735/25
Date: 3 nd November 2025
Description: C program
that:
i. Defines a structure to hold the student information.
ii. Reads all student records from the binary file.
iii. Displays the name and marks of each student on the screen.

*/
#include <stdio.h>
#include <stdlib.h>

//Macro to set daily transuctions to 100
#define MAX_TRANSACTIONS 100

// Function to create the sales.txt file with transactions
void createFile() {
    FILE *file = fopen("C:\\Users\\Administrator\\Desktop\\sales.txt", "w");

    //Error handling if the file is not opened/ created
    if (file == NULL) {
        printf("Error: Could not create sales.txt\n");
        exit(1);
    }

    int n;
    double transaction;

    printf("Enter the number of transactions: ");
    scanf("%d", &n);

    printf("Enter %d transaction amounts:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%lf", &transaction);
        fprintf(file, "%.2lf\n", transaction);
    }

    //TO close the file
    fclose(file);
    printf("File sales.txt created successfully.\n\n");
}

// Function to read transactions and calculate total sales
double calculateTotal() {
    FILE *file = fopen("C:\\Users\\Administrator\\Desktop\\sales.txt", "r");
    if (file == NULL) {
        printf("Error: Could not open sales.txt\n");
        exit(1);
    }

    double transaction, total = 0.0;

    while (fscanf(file, "%lf", &transaction) != EOF) {
        if (transaction > 0) { // ignore negative or zero amounts
            total += transaction;
        } else {
            printf("Warning: Ignored invalid transaction %.2lf\n", transaction);
        }
    }

    //Closing the file
    fclose(file);
    return total;
}

// Function to display total sales
void displayTotal(double total) {
    printf("Total sales for the day: Ksh. %.2lf\n", total);
}


//Main function

int main() 
{
    //Calling the create function
    createFile();               
    double totalSales = calculateTotal(); 
    //Calling the display function
    displayTotal(totalSales);   

    return 0;
}