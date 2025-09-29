/*
Name: Odanga Charles Muhanji
Reg No: PA106/G/28735/25
Description: A program that checks if a student is eligible for final exams. A student is eligible if:
                i. Attendance is >= 75%, AND
                ii. Average marks are >= 40.
                Otherwise, print “Not eligible.”
*/

// Header file for input output functions
#include <stdio.h>
int main(){
    


    //initialization and declaration of attendance variable.
    int attendance=0;
    //prompt the user to enter the attendance , assumed to be in percentage
    printf("\nEnter the percentage attendace;\t ");
    scanf("%d", &attendance);


    //Validation of the attendance input   
    if ((attendance >= 1) && (attendance <=100)){
        printf("Attendance was successfully entered\n");
    }
    else{
        printf("The value entered is not in the expected range! Please start the program again. Should be between 0 to 100 Thank you!");
    }
    

    //initialization and declaration of average_marks variable. && (attendance >75)
    int average_marks=0;
     //prompt the user to enter the average marks
    printf("\nEnter the average marks;\t");
    scanf("%d",&average_marks);

     //Validation of the average marks input   
    
    
    if ((average_marks >= 1) && (average_marks <=100)){
        printf("Average marks was successfully entered\n");
    }
    else{
        printf("The value entered is not in the expected range! Please start the program again. Should be between 0 to 100 Thank you!");
    }
    


    //checking and grading per the attendance and average marks
   
    if (average_marks >=40)
    {
        if (attendance >=75)
        {
        printf("\n\n🥳🥳 You are eligible for the final exammination");
        }
    
    }
    else{
        printf("\n\n😞😞 Unfortunately! Not eligible to take the final exammination.\n\n");
    }
    

    
    return 0;
}