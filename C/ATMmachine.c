#include <stdio.h>
#include <stdbool.h>

int main()
{
    //atm machine 
    
    char isOpen;
    printf("Please enter letter:");
    scanf("%c", &isOpen);
    

    int amount = 1000;
    
    if(isOpen == 'o'){
        printf("Welcome to ATM machine!\n");
        printf("please insert your card:\n");
        int isCardValid;
        
        scanf("%d", &isCardValid);
        if(isCardValid){
            printf("please enter you pin\n");
            int pin;
            scanf("%d", &pin);
            if(pin == 1234){
                printf("please enter you amount:\n");
                int inputAmount;
                scanf("%d", &inputAmount);
                if(inputAmount <= amount){
                    printf("transaction succesful!\n");
                }else{
                    printf("insufficient balance!\n");
                }
            } else{

                printf("Invalid pin.\n");
            }

        }else{
            printf("Invalid card\n");
        }


    }else{
        printf("ATM is closed!\n");
    }

    
    
    return 0;
}
