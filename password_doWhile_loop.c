/*Name: Charles Muhanji
Registration No: PA106/G/28735/25
Description: A password program that requires the user to enter the correct password "1234" to log in, Once correct, "Access Granted" is displayed.
*/

//The <stdio.h> library is used to output and read the input from the user.
#include <stdio.h>
//Main funtion;
int main()
{   
    //Greating the user and requsting them to enter their name!!
    printf("\n\n\t\t\t\tHello, welcome\nEnter your name:  \t");
    //Declaration and defination of name variable
    char name[30];
    scanf("%s",name);

    ////Declaration and initialization of password
    int password = 1234;

    //Declaration and defination of passward to be input from the user
    int user_password;
    
    //Greating the user!
    printf("Hello %s ",name);
    printf("Please enter password! \t");

    //Entering the loop
    do
    {   
        //Storing of the user password input
        scanf("%d", &user_password);

        //Checks if the passowrd matches with the initialized password
        if (user_password == password)
        {
            printf("\n\nWelcome, %s ! You have entered the correct password! ",name);

        //To be processed if the passowrd dos not  matches with the initialized password
        }else if(user_password != password){
            printf("Wrong password! Access denied! Try again: \t");

            //To enable the program to return to loop if letters and spacial characters are entered as passowrd by the user!
            while (getchar() != '\n'); 
            continue; // Skip to the next iteration of the loop
        }
        
    //Conditions of the loop
    } while (user_password !=password || user_password < 1000 || user_password > 9999 );

    //To be printed if the loop is adjourned and the confitions are fully satisfied
    
    printf(" .Access granted! \n\n");

    return 0;
}
