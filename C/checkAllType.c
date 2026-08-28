#include <stdio.h>
#include <ctype.h>

// Check whether a character is:
// Uppercase
// Lowercase
// Digit
// Special character

char* checkType (char val) {
    if(isupper(val)){
        return "Upper case";
    }
    else if(islower(val)){
        return "Lower case";
    }
    else if (isdigit(val)){
        return "Digit";
    }
    else{
        return "special character";
    }



}




int main()
{
    char myChar;
    printf("Please enter character: ");
    scanf("%c", &myChar);    
    
    printf("%s", checkType(myChar));
    
    return 0;
}
