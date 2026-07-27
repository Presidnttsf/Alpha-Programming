#include <stdio.h>

void display()
{
    int num = 20;   // Local variable
    printf("Inside function: %d\n", num);
}

int main()
{
    int num = 10;   // Local variable of main

    printf("Inside main: %d\n", num);

    display();

    return 0;
}
