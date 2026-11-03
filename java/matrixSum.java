import java.util.*;

public class Main {
    public static void main(String[] args) {
      
      int n = 3;
      Scanner sc = new Scanner(System.in);
      int m[][] = new int[n][n];
      int sum = 0;

      for(int i=0; i<n; i++){

        for(int j=0; j<n; j++){
          System.out.println("Enter the number " + i + " " + j + " : ");
          m[i][j] = sc.nextInt();

        }
        
      }
      
      for(int i=0; i<n; i++){
           for(int j=0; j<n; j++){
            sum = sum + m[i][j];
            System.out.print(m[i][j] + " ");

          }
      System.out.println("Sum of row: "+ i + "=" + sum);
      sum = 0;
      }

      
      
      
    }
}
