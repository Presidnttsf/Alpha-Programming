#include <stdio.h>

void printPyramid(int n) {

    for (int i = 1; i <= n; i++) {
        char row[100];
        int position = 0;

        // Add spaces
        for (int j = 0; j < n - i; j++) {
            row[position] = ' ';
            position++;
        }

        // Add stars
        for (int k = 0; k < 2 * i - 1; k++) {
            row[position] = '*';
            position++;
        }

        // End the string
        row[position] = '\0';

        printf("%s\n", row);
    }
}

int main() {
    printPyramid(5);
    return 0;
}
