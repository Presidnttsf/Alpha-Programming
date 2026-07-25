#include <stdio.h>

void printArray (int arr[], int length) {

        
    for(int i=0; i<length; i++){
        int ele = arr[i];
        printf("%d %d \n", i, ele);

    }

}

void printString (char *arr[], int length) {

        
    for(int i=0; i<length; i++){
        char *ele = arr[i];
        printf("%d %s \n", i, ele);

    }

}

void printChar (char arr[], int length) {

        
    for(int i=0; i<length; i++){
        char ele = arr[i];
        printf("%d %c \n", i, ele);

    }

}


// void printName () {

//  char name [] = "Tauseef";
//  printf("%s", name); 

// }

    int main()
    {
        int scores [] = {99, 97, 98, 95, 91};
        
        char string [] = "I am Tauseef Akhtar. I am teaching programming with C.";
        char *students [] = {"Ojus", "sameer", "Ahmed", "Amaan"};


        int length = sizeof(string)/sizeof(string[0]);

    
    
    printArray(scores, 5);
    printString(students, 4);
    printChar(string, length-1); 


return 0;
}
