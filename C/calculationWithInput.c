#include <stdio.h>
int main()
{
    printf("please select operations + - %% * /: ");
    char operation;
    scanf(" %c", &operation);
    if (operation != '+' &&
    operation != '-' &&
    operation != '*' &&
    operation != '/' &&
    operation != '%'){
        printf("invalid operation");
        return 0;
    }
    int num1;
    printf("please enter first number:");
    scanf("%d", &num1);

    int num2;
    printf("please enter second number:");
    scanf("%d", &num2);
    
    
    switch(operation){
        case '+':
        printf("%d", num1 + num2);
        break;
        case '-':
        printf("%d", num1 - num2);
        break;
        case '*':
        printf("%d", num1 * num2);
        break;
        case '/':
        printf("%d", num1 / num2);
        break;
        case '%':
        printf("%d", num1 % num2);
        break;
        default:
        printf("invalid input");    
    }
    return 0;
}
