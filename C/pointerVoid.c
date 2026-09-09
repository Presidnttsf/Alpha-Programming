#include <stdio.h>

int main()
{
    // Integer array containing 2 integers
    int myNumbers[2] = {1, 2};

    // Character array containing:
    // 'H', 'i', and '\0'
    // '\0' represents the end of the string
    char letters[] = "Hi";


    // Create an int pointer
    // 'myNumbers' gives the address of the first element
    // So pi points to myNumbers[0]
    int *pi = myNumbers;

        int x = 10;
        char ch = 'A';

        void *p;

        p = &x;    // can store int address

        p = &ch;   // can store char address


    // Create a char pointer
    // 'letters' gives the address of the first character
    // So pc points to letters[0]
    char *pc = letters;


    // Print the address stored in pi
    // pi points to myNumbers[0]
    printf("%p\n", (void*)pi);
    printf("%d\n", *(pi+0));


    // pi + 1 moves one INTEGER element forward
    //
    // If sizeof(int) = 4 bytes:
    // pi + 1 = pi + 4 bytes
    //
    // Now it points to myNumbers[1]
    printf("%p\n", (void*)(pi + 1));


    // pi + 2 moves two INTEGER elements forward
    //
    // If sizeof(int) = 4 bytes:
    // pi + 2 = pi + (2 × 4)
    //        = pi + 8 bytes
    //
    // This is one position past the end of the array.
    printf("%p\n", (void*)(pi + 2));


    // Print the address stored in pc
    // pc points to letters[0], which is 'H'
    printf("%p\n", (void*)pc);


    // pc + 1 moves one CHARACTER element forward
    //
    // sizeof(char) is always 1 byte
    //
    // So pc + 1 moves exactly 1 byte
    // Now it points to letters[1], which is 'i'
    printf("%p\n", (void*)(pc + 1));


    return 0;
}
