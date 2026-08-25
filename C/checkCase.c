#include <stdio.h>
#include <ctype.h>

int main()
{
    char ch;

    printf("Enter a character: ");
    // scanf("%c", &ch);

    if (ch >= 'A' && ch <= 'Z')
    {
        printf("Uppercase");
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        printf("Lowercase");
    }
    else if (ch >= '0' && ch <= '9')
    {
        printf("Digit");
    }
    else
    {
        printf("Special character");
    }
        char one = 'o';
    printf("\nAnswer is %d", isupper(one));
    printf("\nAnswer is %c", islower(one));
    printf("\nAnswer is %d", isdigit(one));


    return 0;
}
