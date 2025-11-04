/*
Name: Odanga Charles Muhanji
Reg No: PA106/G/28735/25
Date: 2 nd November 2025
Description: C program that allows the librarian to enter book titles and store each title in a text file
named borrowed_books.txt.
i. The program should not delete existing records when a new title is added.
ii. Display a confirmation message once the title is successfully stored.

*/


#include <stdio.h>
int main(){
    //Declaration of the pointer containing the file name, location
    FILE *location;

    //Array for storing the Name  of the students who borrowed books 
    char borrower_name[30];
   
    //Array for storing the title of the books borrowed
    char book_title[30];

    //Variable for storing the book number of the books borrowed
    int book_number;

    

    //Display of Error massage when error arises while opening the file 
    if (location == NULL)
    {
        printf("Opps❗Error opening the file!");
    }
    

    //Initialization of location pointer
    location= fopen("C:\\Users\\Administrator\\Desktop\\borrowed_books.txt", "a");//'a' is to add/ append information to the file

    //Prompting teh user to enter name of the borrower of the book
    printf("\n\nEnter name of the book borrower : ");
    fgets(borrower_name,sizeof(book_title),stdin);


    //Prompting, the user on the program, to enter book title
    printf("Enter book title : ");
    fgets(book_title,sizeof(book_title),stdin);

    //Prompting, the user on the program, to enter book number
    printf("Enter book number : ");
    scanf("%d", &book_number);



    //To separate one record from onother
    fprintf(location,"------------------------------------------------------------------------------------") ;
    //To print the title of the book entered to the user
    //fprintf(location, "The title is successfully stored");
    fprintf(location, "\nName of the book borrower %s .", borrower_name) ;
    fprintf(location, "\nTitle of Book borrowed %s .", book_title) ;
    //To separate one record from onother
    fprintf(location, "\nBook number %d .", book_number) ;
    fprintf(location,"\n------------------------------------------------------------------------------------") ;

    //Massage to tell user the details of the boook borrower and the title of the book borrowed are successfuly saved
    printf("\nThe borrower  and title details were successfuly added to the borrowed_books files\n\n");

    //Closing the file.
    fclose(location);

    return 0;

}
