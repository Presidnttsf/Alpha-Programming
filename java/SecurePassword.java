import java.util.*;

class SecurePassword {
    // 1. The wrapped data (stored privately so nobody can change it directly)
    private String passwordValue;

    // 2. Constructor: "Wraps" the raw text and checks if it's long enough
    public SecurePassword(String rawPassword) {
        if (rawPassword.length() < 6) {
            System.out.println("⚠️ WARNING: Password is too short!");
        }
        this.passwordValue = rawPassword; 
    }

    // 3. Getter Method: "Unwraps" the text but masks it for security
    public String getMaskedPassword() {
        return "*******"; 
    }
}

// Main class to run and test our code
public class Main {
    public static void main(String[] args) {
        
        // Creating our custom wrapped object
        SecurePassword myPassword = new SecurePassword("1234567"); 
        
        // Printing the masked version using our wrapper's custom behavior
        System.out.println("Your password is: " + myPassword.getMaskedPassword());
    }
}



