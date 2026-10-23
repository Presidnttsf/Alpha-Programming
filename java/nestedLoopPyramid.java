import java.util.*;

public class Main {
    public static void main(String[] args) {
      int n = 10;
      for(int i=1; i<=8; i++){

        for(int j=1; j<=n; j++){
          
          System.out.print(" ");

        }

        for(int k=i; k>=1; k--){
          System.out.print(k);
        }

        for(int l=2; l<=i; l++){
          System.out.print(l);
        }
        System.out.println();
        n--;
      }
      
    }
}
