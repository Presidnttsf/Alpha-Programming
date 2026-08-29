import java.util.*;

public class Main {

  public static void pt(Object value){

      System.out.println(value);
  }

    public static void customLoop(int start, int end, int step){
        if(start > end){
          return;
        }

        pt(start);

    customLoop(start+step, end, step);

    }

    public static int factorial(int n){
        if(n <= 1 ){
          return 1;
        }
        // pt(n-1 + " " + n);

        return n * factorial(n-1);

    }
    
    
    public static void main(String[] args) {
    
    // customLoop(1, 15, 2);
    pt(factorial(4));
    
    
    }
}
