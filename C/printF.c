#include <stdio.h>
#define pt(val) _Generic((val),\
int: printf("%d\n", val),\
float: printf("%.2f\n", val),\
char*: printf("%s\n", val),\
char: printf("%c\n", val)\
)

void pti(int value){

printf("%d\n", value);
}

void ptc(char value){

printf("%c\n", value);
}

void pts(const char* value){

printf("%s\n", value);
}


int main()
{
    
    pti(10);
    ptc((char)'a');
    char my_let = 'b';
    ptc(my_let);
    pts("I am tauseef akhtar");


    pt("This is my string by pt function.");
    pt(2.564f);
    return 0;
    
}
