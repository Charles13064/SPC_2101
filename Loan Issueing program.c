/*
Name: Odanga Charles Muhanji
Reg No: PA106//G/28735/25
Description: Program issueing loans to personal 21 years and earns an annual salary above Ksh 27000 
*/

#include <stdio.h>

int main(){
    //Greeting the client
    printf("\n\nHello welcome to Jisaidie Online Loaning Platform\n");
    printf("\nWe'll have to collect information from you for you to qualify for being guaranted loans form us!\nWhat is you name?\n");
    
    //Declaration and defination of a name variable
    char name;
    scanf("%s", &name);
    printf("Your name is successfully captured %s,", &name);

    //Declaration and defination of a ID number variable
    int iD_Nimber;
    printf("\n\nEnter your  ID number\n");
    scanf("%d", &iD_Nimber);
    printf("Your ID Number has successfully been Verified! %s,", &name);
    //Assumption of verify if the ID matches with the name of the user

    //Declaration and defination of a age variable
    int age;
    printf("\n\nEnter your  age\n");
    scanf("%d", &age);

    //Declaration and defination of a annual income variable
    int annual_income;
    printf("\nEnter your annual income\n");
    scanf("%d", &annual_income);

    //Declaration and defination of a loan variable
    double loan;
    printf("\nEnter your suggested loan \n");
    scanf("%lf", &loan);
    printf("\nSuggested loan is Ksh. %.2lf \n", loan);

    //Checking if the age is greater than 21 years and the annual income is greater than 
    if (age > 21 && annual_income > 21000){
        printf("\n\n\nCongradulations🥳🥳🥳!!\n");
        printf("You qualify for the loan of Ksh %.2lf ,%s.", loan ,&name);
    }
    else{
        printf("Unfortunately we are unable to offer you loan right now %s", &name);
    }

    return 0;
}