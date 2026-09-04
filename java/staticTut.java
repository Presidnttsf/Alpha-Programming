import java.util.*;

public class Main {
 
  static void pt(Object value){
    System.out.println(value);
  } 



   static class OuterClass {
   static int x = 10;

   static class InnerClass {
  static int y = 5;
  }
}

 
 
 
    public static void main(String[] args) {

        pt(Main.OuterClass.x);
          // without stacit we need create instance of inner class
        // OuterClass outer = new OuterClass();
        // OuterClass.InnerClass myCls= outer.new InnerClass();
          // second with static method
          OuterClass.InnerClass myCls = new OuterClass.InnerClass();
          pt(myCls.y);
  

          // InnerClass is non-static,
          // so we need an OuterClass object first.

          // OuterClass outer = new OuterClass();
          // OuterClass.InnerClass myCls = outer.new InnerClass();


          // If InnerClass is static,
          // we can create it directly using the class name.

          // static class InnerClass
          // OuterClass.InnerClass myCls = new OuterClass.InnerClass();



    }
}
