/*Name: Charles Muhanji
Registration No: PA106/G/28735/25
Description: A program A program prompting the user to enter their credentials and displaying it.
*/
//A program prompting the user to enter their credentials.
#include <stdio.h>

int main ()
{
    
    char name[20];
    printf("Hello👋, welcome to this programme\nWe are at zest to have you!🥳🥳!");
    printf("\nPlease enter you name; ");
    scanf("%s", &name);
    printf("Hello👋 %s, we are happy to have you today🥳🥳!", &name);
    {
     //Entry of age.  
    int age;
    printf("We humbly need the following information from you %s!", &name);
    printf("\nEnter your age: \n");
    scanf("%d",&age);
    {   
        //Entry of Gender. 
        char gender;
        printf("Please enter your gender:\n");
        scanf("%s", &gender);
        {   
            //Entry of Id Number. 
            double idNumber;
            printf("Please enter your National Identificaton Number:\n");
            scanf("%lf", &idNumber);
            {
                //Entry of Height. 
                float height;
                printf("Enter your height:\n");
                scanf("%f", &height);
                {
                    //Entry of Bank Details.
                    float balance;
                    printf("%s, We thank you for trusting us this far, we lasty need you to put your bank account balance, either mobile banking or commercial banking:\n", &name);
                    scanf("%f",&balance);
                    printf("\n\nHello!! You have finished submitting your information to us!\nYou are %s, a %s. National ID number; %.0lf. You are %d cm in stature.\nLastly, You have a balance of Ksh. %.2lf in your money account.\n~~~~~~~Thank you %s for Trusting us🫡 Have a great time Much love from us🤗!~~~~~~~",&name, &gender, &idNumber, &height, &balance, &name);
                }
            }
        }
    }
    }
    return 0;
    /*First C code of Charles muhanji
    Thank you God for helping me all through! */

}


