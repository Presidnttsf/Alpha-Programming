#include <stdio.h>


// Check whether the given number is a three-digit number.

char* is3digit(int num){

    int count = 0;

    while(num){

        num = num/10;
        count++;
    }
    if(count == 3){
        return "Number is 3 digits.";
    }else{
        
        return "Number is not digits.";
    }

}
int main()

{
    int num;
    printf("Please enter number: ");
    scanf("%d", &num);
 


    printf("%s",is3digit(num));

    
    
    return 0;
}
