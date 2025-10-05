/*Name: Charles Muhanji
Registration No: PA106/G/28735/25
Description: C program that implements a number guessing game. The computer generates
random number in the range 1 to 20 (inclusive). The program  prompt the
player repeatedly to enter a guess and then respond with one of the following messages:
                    • "Too high!" if the guess is greater than the secret number.
                    • "Too low!" if the guess is less than the secret number.
                    • "Congratulations!" if the guess is equal to the secret number.
The program must also count and display the total number of attempts it took for the player to
guess correctly.
*/

//<stdio.h> header is included because both input and out are taken and displayed respectively
#include <stdio.h>
#include <stdlib.h> // For rand() and srand(), for random numbers
#include <time.h>   // For time(), returns defferent value everytime the loop starts again!

//main function
int main()
{
    //Declaration of number of times to play variable, plays
    int plays;

    //Declaration of total_attempts variable, initialized to 1, as the first trial to the game!
    int total_attempts=1;

    //Declaration random number guessed by the user from the user ,
    int lucky_number=0;
    printf("\n\nEnter your lucky number\t");
    scanf("%d",&lucky_number);

    //Validation of the value entered!
    if(lucky_number <=1 || lucky_number >1)
    {
        

        //Declaration of number range list/array from which the random numbers comes from!, secret_numbers
        int secret_numbers[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
        //Total number of elements in the secret_numbers- set
        int listsize=sizeof(secret_numbers)/sizeof(secret_numbers[0]);

        int random_index = rand() %listsize;
        // Seed the random number generator once
        srand(time(NULL));

        //printing 1 random number, <1
        while (lucky_number !=  random_index ){

               
            //Declaration random number guessed by the user from the user ,
            int lucky_number=0;
            printf("\n\nEnter your lucky number\t");
            scanf("%d",&lucky_number);

                            

            int random_index = rand() %listsize;
            printf("Random number: %d\n", secret_numbers[random_index]);


            //If the lucky_number and random number is equal 
            if (secret_numbers[random_index] == lucky_number ){
                printf("______________Congratualations🥳🥳!!You have won the game__________________ ");
                printf("__________________\nYou have tried for %d times._____________\n", total_attempts); 
                //To end the program once the user has won!!  
                break;
            }

            //If the lucky_number and random number is equal 
            else if(lucky_number < secret_numbers[0] ){
                printf("Too low! Try again");
                        
            }
            else if(lucky_number > secret_numbers[19] ){
            printf("Too High! Try again");
                                
            }else{
                printf("You should enter a value from 1 ");
                exit;
            }
            //Computation and display of the total number of attempts
            total_attempts +=1;
            printf("\nYou have tried for %d times.\n", total_attempts);    
        }  
                
    
    //Validation of the value entered has return a false value!   
    }else{
        printf("Sorry! The value entered should be a number!");
    }
        
    
    return 0;
}