#include <stdio.h>

// Function to reverse a number
int reverseNum(int num) {

    // Variable to store the reversed number.
    // Initially it is 0 because no digits have been processed yet.
    int reverse = 0;

    // Keep looping until num becomes 0.
    // Same as: while (num != 0)
    while (num) {

        // Get the last digit of num using the modulus operator.
        // Example:
        // num = 12345
        // remainder = 12345 % 10 = 5
        int remainder = num % 10;

        printf("remainder = %d\n", remainder);

        /*
            Build the reversed number.

            Formula:
                reverse = reverse * 10 + remainder

            Why multiply by 10?

            Suppose:
                reverse = 54
                remainder = 3

            reverse * 10
                54 * 10 = 540

            Add the new digit:
                540 + 3 = 543

            This shifts the existing digits left by one place
            and appends the new digit at the end.
        */
        reverse = reverse * 10 + remainder;

        printf("reverse = %d\n", reverse);

        /*
            Remove the last digit from num.

            Example:
                num = 12345

                num /= 10

                becomes

                num = 1234

            Since num is an integer, the decimal part is discarded.
        */
        num /= 10;

        printf("num = %d\n\n", num);
    }

    // Return the completed reversed number.
    return reverse;
}
