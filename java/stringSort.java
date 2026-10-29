import java.util.*;

public class Main {
    public static void main(String[] args) {
      
      char myChar [] ={'L', 'r', 'u', 'p', 'a'};
      String students [] ={"hasnain", "tauseef", "nazneen", "abubakar"};

      for(int i=0; i<myChar.length; i++){

            for(int j=0; j<myChar.length-1-i; j++){
              if(myChar[j] > myChar[j+1]){
                  char temp = myChar[j];
                  myChar[j] = myChar[j+1];
                  myChar[j+1] = temp;
              }
            }
      }
      String res = Arrays.toString(myChar);
      System.out.print(res.charAt(2));
    }
}
