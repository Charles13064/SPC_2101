/*
Name: Odanga Charles Muhanji
Reg No: PA106/G/28735/25
Date: 27 th October 2025
Description: A C program for a hotel,  hotel chain has 3 branches, each with 5 floors and 10 rooms per floor.
1. Use a 3D array chain[3][5][10] to represent all branches.
2. Assign random occupancy (1 or 0) to each room.
3. Calculate and display the total number of occupied rooms across all branches
*/

//Header file for usage of printf() and scanf() functions
#include <stdio.h>
//Header file for usage of time() 
#include <time.h>
//Header file for usage of random occupancy (1 or 0) to each room.
#include <stdlib.h>

//Main function
int main()
{   
    //To randomize Occupation of room each time the program runs
    srand(time(0));

    
    //Declaration of 3D array containing 3 branches, each with 5 floors and 10 rooms per floor.
    int array_chain[3][5][10] ;
    int total_occupied = 0;
    int total_vacant =0;


    //Initializing the values of the hotel branches
    for (int b = 0 ; b < 3 ; b++) //b represent branch
    { 
        int branch_occupied = 0;
        int branch_vacant = 0;
        printf("\nBranch %d\n", b+1 );

        //Initializing the values of the floor in the hotel branches
        for (int f = 0; f < 5; f++) //f represent floor
        {
            printf("floor %d\n",f+1);

            //Initializing the status of the rooms in the hotel in each branch
             
            for (int r = 0; r < 10; r++) {//r represent room
                int val = rand() % 2;          // 0 = vacant, 1 = occupied
                array_chain[b][f][r] = val;

                if (val == 1) 
                {
                    printf("  room %-2d: occupied\n", r + 1);
                    branch_occupied++;
                    total_occupied++;
                } else {
                    printf("  room %-2d: vacant\n", r + 1);
                    branch_vacant++;
                    total_vacant++;
                }
            }
            
            printf(" Branch %d summary: %d occupied, %d vacant\n", b + 1, branch_occupied, branch_vacant);
        
        }

        //To display the total number of occupied rooms across all branches
        //printf("\n%d rooms are occupied\n",occupied ); 
    printf("\nTotal across all branches: %d occupied, %d vacant\n\n", total_occupied, total_vacant);

    }
    return 0;
}