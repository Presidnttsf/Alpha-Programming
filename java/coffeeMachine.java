import java.util.*;
import java.util.Scanner;
public class Main {
  
    public static void pt(Object value){
      System.out.println(value);
    }
  
  
    public static void main(String[] args) {
      
     Scanner input = new Scanner(System.in);
        String coffeeMachineUI = """
        Please enter your choice:
        1: Coffe.
        2: Capaccino.
        3: Esperresso.
        4: Lemon Tea.
        5: Milk.
        """;
        pt(coffeeMachineUI);
      int userInput = input.nextInt();

      switch (userInput){

        case 1:
         pt("Coffe served");
         break;
        case 2:
         pt("Capraccino served");
         break;
        case 3:
         pt("Esperresso served");
         break;
         case 4:
         pt("Lemon tea served");
         break;
         case 5:
         pt("Milk served");
         break;
         default:
         pt("Invalid input please try value from 1 to 5!");
         return;
      };




    }
}
