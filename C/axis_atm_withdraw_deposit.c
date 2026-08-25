#include <stdio.h>
#include <stdbool.h>
#include <string.h>
int main()
{
    int balance = 1000;
    printf("Welcome to Axis Bank ATM. Please insert your card.\n");
    char isCardValid[10];
    scanf("%19s", &isCardValid);
    if (strcmp(isCardValid, "Axis") == 0 || strcmp(isCardValid, "axis") == 0)
    {
        printf("Please enter your pin.\n");
        int pin;
        scanf("%d", &pin);
        if (pin == 1234)
        {
            int userChoice;
            printf("For Deposit press 1 or withdraw press 2: ");
            scanf("%d", &userChoice);
            if (userChoice == 1)
            {
                int depositAmt;
                printf("Please enter your deposit amount: ");
                scanf("%d", &depositAmt);
                balance = balance + depositAmt;
                printf("Your amount is successfully deposited. Your current balance is %d.", balance);
            }
            else
            {
                printf("Please enter your amount.\n");
                int withdraw = 500;
                scanf("%d", &withdraw);
                if (withdraw <= balance)
                {
                    printf("%s %d rs.", "Transaction successful. Your current balance is:", balance - withdraw);
                }
                else
                {
                    printf("Insufficient balance.\n");
                }
            }
        }
        else
        {
            printf("Incorrect pin.\n");
        }
    }
    else
    {
        printf("Invalid card.\n");
    }
    return 0;
}
