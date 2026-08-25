#include <stdio.h>

char* printDetail(char* result, char* name, char* city, char* country)
{
    sprintf(result, "%s %s %s", name, city, country);
    return result;
}

int main()
{
    char result[100];

    char* res = printDetail(result, "Amaan", "Nagpur", "India");

    printf("%s", res);

    return 0;
}
