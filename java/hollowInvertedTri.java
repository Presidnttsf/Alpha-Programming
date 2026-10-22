import java.util.*;

public class Main {
    public static void main(String[] args) {

        int t = 5, d = -1, c = 0, p = 1, s = 8;
        // t = number of stars on each side
        // d = controls the number of spaces in the middle
        // c, p, s are declared but not used in this program

        for (int i = 1; i <= 5; i++) {
            // Outer loop: controls 5 rows

            for (int j = 1; j <= t; j++) {
                // Prints stars on the left side
                // First row: 5 stars
                // Second row: 4 stars
                // Third row: 3 stars, and so on
                System.out.print("*");
            }

            for (int k = 0; k <= d; k++) {
                // Prints spaces between the two groups of stars
                // Initially d = -1, so this loop runs 0 times
                // Next d = 1, so it prints 2 spaces
                // Then d = 3, so it prints 4 spaces
                System.out.print(" ");
            }

            for (int l = 1; l <= t; l++) {
                // Prints stars on the right side
                // Same number of stars as the left side
                System.out.print("*");
            }

            d = d + 2;
            // Increases the middle space count by 2 each row
            // -1, 1, 3, 5, 7

            t = t - 1;
            // Decreases the stars on each side by 1
            // 5, 4, 3, 2, 1

            System.out.println();
            // Moves the cursor to the next line after each row
        }
    }
}
