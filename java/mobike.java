import java.util.*;


public class Main {
    static void pt(Object value){
    System.out.println(value);   
    
  }
  
  static class  Mobike{
    String bno, phno, name;
    int days;
    double charge;

    void input(){
      Scanner sc = new Scanner(System.in);
      pt("Enter your bike no.:");
      bno = sc.nextLine();
      pt("Enter your phone no.:");
      phno = sc.nextLine();
      pt("Enter your name:");
      name = sc.nextLine();
      pt("Enter no. of day taken for rent:");
      days = sc.nextInt();
      sc.close();
    }
    
    void display(){
      pt(bno+"\t"+phno+"\t"+name+"\t"+days+"\t"+ "Rs. "+charge);
    }

    void compute(){
        if (days <= 5) {
                charge = days * 500;
            }
            else if (days <= 10) {
                charge = (5 * 500) + ((days - 5) * 400);
            }
            else {
                charge = (5 * 500) + (5 * 400) + ((days - 10) * 200);
            }
    }

  }

  
  
  public static void main(String[] args) {

      Mobike bike = new Mobike();
      bike.input();
      bike.compute();
      pt("==========================\n");
      bike.display();
      pt("==========================\n");

      
    
 
 
  }
}
