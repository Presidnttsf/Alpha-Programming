#include <stdio.h>
#include <string.h>

int main(void)
{
    // Normal integer variable
    int num = 10;

    // Character variable
    char grade = 'B';

    // Integer array
    // Each integer is stored in a separate memory location
    int numbers[] = {10, 20, 30, 40};


    // 2D character array
    // It can store multiple strings.
    // Each row is a separate character array.
    char students[4][20] = {
        "Tauseef",
        "Anushka",
        "Sameer",
        "vinay"
    };


    // Pointer to a string literal
    //
    // myName stores the address of the first character
    // of the string literal "Anushka".
    //
    // The characters of the string are stored in
    // consecutive memory locations.
    //
    // IMPORTANT:
    // We should NOT modify a string literal.
    char *myName = "Anushka";


    // Character array initialized with a string
    //
    // Here, name is an actual character array.
    // Each character is stored in a separate memory location.
    //
    // '\0' is automatically added at the end of the string.
    char name[] = "Tauseef Akhtar";


    // Array of character pointers
    //
    // Each element of person is a pointer.
    // Each pointer points to the first character
    // of its corresponding string literal.
    char *person[] = {
        "tsf",
        "amd",
        "xyz"
    };


    // Since name is a character array,
    // we can modify individual characters.
    name[0] = 'K';


    // This should NOT be done:
    //
    // myName[0] = 'J';
    //
    // myName points to a string literal.
    // Modifying a string literal causes undefined behavior.


    // Print one character from the character array
    printf("%c\n", name[0]);


    // %s prints a complete string.
    // myName points to the first character of "Anushka",
    // so printf continues until it finds '\0'.
    printf("%s\n", myName);


    // person[0] is a pointer to the string "tsf".
    // %s prints the string pointed to by person[0].
    printf("%s\n", person[0]);


    return 0;
}
