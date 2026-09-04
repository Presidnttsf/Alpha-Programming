import java.util.*;


// ============================================================
// INTERFACE
// ============================================================

// An interface defines a contract.
// Any class that implements Vehicle MUST provide
// an implementation of engineStart().
interface Vehicle {

    // This is an abstract method by default.
    // It has no body here.
    void engineStart();
}


// ============================================================
// CLASS IMPLEMENTING INTERFACE
// ============================================================

class Animal implements Vehicle {

    // This is a normal method inside Animal.
    // It is used to print values.
    void pt(Object value) {
        System.out.println(value);
    }


    // Normal method of Animal.
    public void mySound() {
        pt("This is coming from animal class\n");
    }


    // Because Animal implements Vehicle,
    // Animal MUST provide the engineStart() method.
    //
    // This is the implementation of the method
    // declared inside the Vehicle interface.
    public void engineStart() {
        pt("the engine is starting from animal class wroom bhau\n");
    }
}


// ============================================================
// MAIN CLASS
// ============================================================

public class Main {

    // Static printing method.
    // We can call this directly from main()
    // because main() is also static.
    static void pt(Object value) {
        System.out.println(value);
    }


    public static void main(String[] args) {


        // ====================================================
        // ANONYMOUS CLASS
        // ====================================================

        Animal an = new Animal() {

            // This is an anonymous class.
            //
            // We are creating a NEW unnamed subclass of Animal.
            //
            // Conceptually, Java treats this approximately like:
            //
            // class SomeAnonymousClass extends Animal {
            //
            //     ...
            // }
            //
            // But we don't give that class a name.


            // This method OVERRIDES Animal's mySound() method.
            //
            // Animal already has:
            //
            // public void mySound() {
            //     ...
            // }
            //
            // The anonymous class provides its own version.
            public void mySound() {

                // This implementation belongs to
                // the anonymous subclass, not the original Animal.
                pt("This is coming from anonymus animal class");
            }

        }; // <-- semicolon ends the anonymous-class object creation


        // an refers to the anonymous subclass object.
        //
        // Therefore Java executes the overridden mySound()
        // from the anonymous class.
        an.mySound();


        // The anonymous class did NOT override engineStart().
        //
        // Therefore Java uses the inherited engineStart()
        // from Animal.
        //
        // Animal's engineStart() itself is implementing
        // the method required by Vehicle.
        an.engineStart();
    }
}
