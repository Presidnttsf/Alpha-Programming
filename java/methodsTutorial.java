import java.util.*;

public class Main {

 static void pt(Object value){
  System.out.println(value);
}

   static void printTable(int table, int end){
          for(int i=1; i<=end; i++){
            pt(table + " x " + i + " = " + table*i);
        }
 
  } 

  static String sentence(String name, String city){
    return "My name is " + name + " and I am from " + city;
  }



    public static void main(String[] args) {

          // printTable(5, 8);
          // printTable(6, 92);
          // printTable(3, 10);
          pt(sentence("Hunain", "Hyderabad"));
          pt(sentence("Hasain", "Nagpur"));
          pt(sentence("Tauseef", "Mumbai"));
    
    }
}

 
