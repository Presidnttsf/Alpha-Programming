import java.util.*;

public class Main {
    public static void main(String[] args) {
      
      int num[] = {3, 4, 6, 0, -1, 1, 5,2};
                System.out.println(num.length);

      for(int i=0; i<num.length; i++){

          for(int j=0; j<num.length-1-i; j++){
              System.out.print(num.length-1-i+ " ");
              if(num[j]>num[j+1]){
                int temp = num[j];
                num[j] = num[j+1];
                num[j+1] = temp;

              }
          }

              
      }
      
      for(int i=0; i<num.length; i++){

      System.out.println(num[i]);
      }
      
    }
}
