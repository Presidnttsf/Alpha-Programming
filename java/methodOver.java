import java.util.*;

public class Main {
    
    
    public static void pt (Object value){
      
      System.out.println(value);
    }

    // method overloading

    static int addition (int a, int b) {
        return a + b;

    }

    static int addition (int a, int b, int c) {
        return a + b + c;

    }



    static float addition (float a, float b) {
        return a + b;

    }
    
    
    
    public static void main(String[] args) {
     
     pt(addition(10.23f, 3.12f));
     pt(addition(10, 3, 2));
     
    }
}
