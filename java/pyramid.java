import java.util.*;

public class main{



  public static void main(String [] args){
      
      int num = 7;

    for(int i=1; i<=num; i++){

      for(int j=1; j<=num-i; j++){
        System.out.print(" ");
      
    }
      for(int k=1; k<=(2*i)-1; k++){
        System.out.print("*");
      
    }
      System.out.print("\n");
    }


    
  }
}
