#include <stdio.h>

int num = 100;   // Global variable

void display()
{
    int num = 50;    // Local variable
    printf("Inside display: %d\n", num);
}

int main()
{
    printf("Inside main: %d\n", num);

    display();

    return 0;
}
