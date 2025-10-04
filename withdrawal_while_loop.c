/*Name: Charles Muhanji
Registration No: PA106/G/28735/25
Description: Program of a bank ATM that allow withdrawals as long as the account balance is greater than 0. The program uses a while loop where the user enters the amount to withdraw until the balance becomes zero or negative. In addition, it displays the balance after each withdrawal.
*/


//<stdio.h> header is included because both input and out are taken and displayed respectively
#include <stdio.h>
//main function
int main(){
    //Defination and initialization of the input variable, withdrawal_ammount
    int withdrawal_amount=0;
    //Defination and initialization of the input variable, account_balance
    int account_balance=0;


    //Prompting  the user to enter their account balance
    printf("\n\nEnter your bank account balance:\t");
    //Collection and storing of account balance
    scanf("%d",&account_balance);


    while (account_balance > 0)
    {   
        printf("\nEnter your withdrawal amount:\t");
        scanf("%d", &withdrawal_amount);

        //Validation of withdrawal_amount   
        if (withdrawal_amount <= 0) {
            printf("Invalid withdrawal amount. Please enter a positive value.\n");
            continue;
        }
        
        //Calculation of the account balance
        account_balance -= withdrawal_amount; 
        printf("Account balance is KES %d\n", account_balance);


        //Validation of account_balance, if account_balance is >0, the loops continues, otherwise it ends
        if (account_balance <= 0) {
            printf("Your account balance is insufficient for further withdrawals.\n");
        }
    }
    


    return 0;
}
