#include <stdio.h>

int num = 100;   // Global variable

void display()
{
    printf("Inside function: %d\n", num);
}

int main()
{
    printf("Inside main: %d\n", num);

    display();

    return 0;
}
