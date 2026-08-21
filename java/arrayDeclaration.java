import java.util.*;

public class Main {
    public static void main(String[] args) {

        String[] cars = {"Volvo", "BMW", "Ford", "Mazda"};
        int[] myNum = {10, 20, 30, 40};
          int size = myNum.length;
          System.out.println(size) ;
        int i = 0;
        
for (String val: cars){
        System.out.println( i + " " + val);
          i++;
        };
        
        int scores [] = new int []{1, 2, 3, 4, 5, 7, 8};

        // scores[0] = 98;
        // scores[1] = 91;
        // scores[2] = 93;
        // scores[3] = 97;
        // scores[4] = 95;
        // scores[6] = 99;
        
        for(int val : scores){
          System.out.println(val);
        }
        
        
        
      String name [] = new String[3];
          name[0] = "TSF";
          name[1] = "Hunain";
          name[2] = "Hasnain";
         for(String val : name){
          System.out.println(val);
        }     
        

        

    }
}
