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
    
    
    public static void main(String[] args) {
    
    customLoop(1, 15, 2);
    
    
    }
}
