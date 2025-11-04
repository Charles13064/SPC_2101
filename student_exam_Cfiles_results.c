/*
Name: Odanga Charles Muhanji
Reg No: PA106/G/28735/25
Date: 3 nd November 2025
Description:  C program that:
            i. Reads all transactions from the file.
            ii. Calculates and displays the total sales for the day.
            iii. Ensures the file is properly closed after reading.

*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define the student structure
struct Student {
    char name[50];
    char regNo[20];
    int totalMarks;
};

// Function to write student records to binary file, stud_results.bin
void writeRecords(const char *filename, int n) {
    FILE *file = fopen("C:\\Users\\Administrator\\Desktop\\stud_results.bin", "wb");
    if (file == NULL) {
        printf("Error: Could not open for writing\n");
        exit(1);
    }

    struct Student s;
    for (int i = 0; i < n; i++) {
        //Prompting the user to enter name into stud_exam.bin file
        printf("\n\n\nEnter name of student %d: ", i + 1);
        getchar(); // consume newline
        fgets(s.name, sizeof(s.name), stdin);
        s.name[strcspn(s.name, "\n")] = '\0'; // remove trailing newline

        //Prompting the user to enter registration number into stud_exam.bin file
        printf("Enter registration number: ");
        //Storing of data entered by the user
        fgets(s.regNo, sizeof(s.regNo), stdin);
        s.regNo[strcspn(s.regNo, "\n")] = '\0';

        //Prompting the user to enter total marks into stud_exam.bin file
        printf("Enter total marks: ");
        scanf("%d", &s.totalMarks);
        
        //to write data to the binary file ones
        fwrite(&s, sizeof(struct Student), 1, file);
    }

    //TO close the file
    fclose(file);
    printf("\nStudent records successfully written! ");
}

// Function to read and display student records from binary file
void readRecords(const char *filename) {
    FILE *file = fopen("C:\\Users\\Administrator\\Desktop\\stud_results.bin", "rb");
    if (file == NULL) {
        printf("Error: Could not open for reading");
        exit(1);
    }

    struct Student s;
    printf("\nStudent Records:\n");
    printf("-------------------------------\n");
    //to read data to the binary file ones
    while (fread(&s, sizeof(struct Student), 1, file) == 1) {
        printf("Name       : %s\n", s.name);
        printf("Reg. No.   : %s\n", s.regNo);
        printf("Total Marks: %d\n", s.totalMarks);
        printf("-------------------------------\n");
    }

    //TO close the file
    fclose(file);
}

//MAIN FUNCTION
int main() {
    //Declaration of number of students
    int n;
    //Promting the user to indicate start of the program
    printf("\n\nHow many student records do you want to enter?   ");
    scanf("%d", &n);

    //Calling of the two functions
    writeRecords("results.dat", n);
    readRecords("results.dat");

    return 0;
}
