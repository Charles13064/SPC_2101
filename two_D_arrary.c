/*
Name: Odanga Charles Muhanji
Reg No: PA106/G/28735/25
Date: 27 th October 2025
Description: A C program for a hotel that records its total revenue for each day of the week (7 days).
    2D Array – Room Occupancy (One Branch)
    Each branch has 5 floors, and each floor has 10 rooms.
        1. Use a 2D array [5][10] where each element represents a room 
            (1 = occupied, 0 = vacant).
        2. Input random occupancy data (or simulate input).
        3. Display the number of occupied and vacant rooms per floor
    
*/

#include <stdio.h>
int main()
{   

    // Declaration and initialization of room occupancy array (1=occupied, 0=vacant)
    int array_occupancy[5][10] = {
        {1,0,1,1,0,1,0,1,0,1},  // Floor 1
        {1,0,0,1,0,0,0,1,1,1},  // Floor 2
        {0,1,0,1,0,1,0,0,1,0},  // Floor 3
        {1,0,0,1,0,1,0,1,0,1},  // Floor 4
        {1,1,0,0,1,0,1,0,1,1}   // Floor 5
    };

    printf("\nHotel Room Occupancy Status:\n");
    printf("(1 = Occupied, 0 = Vacant)\n\n");

    // Loop through each floor
    for (int floor = 0; floor < 5; floor++)
    {
        int occupied = 0;
        int vacant = 0;

        // Count occupied and vacant rooms on this floor
        for (int room = 0; room < 10; room++)
        {
            if (array_occupancy[floor][room] == 1)
                //if the room is occupied it is being added 
                occupied++;
            else if (array_occupancy[floor][room] == 0)
                //if the room is not occupied it is being added 
                vacant++;

            // Print room status
            printf("%d ", array_occupancy[floor][room]);
        }   
        
        printf("\nFloor %d: %d Occupied, %d Vacant\n\n", floor + 1, occupied, vacant);
    }
    
    return 0;
}