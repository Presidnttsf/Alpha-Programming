#include <stdio.h>
#include <string.h>


char* printDetails (char*message, char* name, int age) {
        
        sprintf(message, "My name is %s and I am %d years old.", name, age);
        return message;

}



int main()
{
    char name [20];
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
        char message[100];
      printf("%s", printDetails(message, name, age));
    return 0;
}
