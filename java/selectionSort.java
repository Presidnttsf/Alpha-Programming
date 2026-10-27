import java.util.*;

public class Main {

    public static void main(String[] args) {

        // Declare and initialize an array
        int arr[] = {5, 78, 12, 24, 2, 0, 1};

        // Store the total number of elements in the array
        int n = arr.length;

        // Outer loop: selects the position where the minimum element should be placed
        for (int i = 0; i < n; i++) {

            // Assume the current element is the minimum element
            int min_idx = i;

            // Inner loop: search for the smallest element in the remaining unsorted array
            for (int j = i + 1; j < n; j++) {

                // Check whether the current element is smaller than the minimum element
                if (arr[j] < arr[min_idx]) {

                    // If smaller, update min_idx to the index of that element
                    min_idx = j;
                }
            }

            // Store the current element in a temporary variable
            int temp = arr[i];

            // Place the minimum element at the current position
            arr[i] = arr[min_idx];

            // Move the original element to the minimum element's previous position
            arr[min_idx] = temp;
        }

        // Print the sorted array
        for (int i = 0; i < n; i++) {
            System.out.print(arr[i] + " ");
        }
    }
}
