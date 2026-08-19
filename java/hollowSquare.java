import java.util.*;

public class Main {

    public static void pt(Object value){
      System.out.print(value);
      
    }


    public static void main(String[] args) {

        int num = 17;

        for(int i=1; i<=num; i++){
            
          for(int j=1; j<=num; j++){
            if(i==1 || i==num || j==1 || j == num){
              
            pt("* ");  
            } else if(i == (num+2)/2 && j ==(num+2)/2){
              pt("H ");

            }
            
            else{
              pt("  ");
            }
          
          }
          pt("\n");
        }
    
    }
}
