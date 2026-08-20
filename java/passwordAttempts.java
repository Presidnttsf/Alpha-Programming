import java.util.*;

public class Main {
    public static void main(String[] args) {

        int password;
        int attempts = 0;

        Scanner input = new Scanner(System.in);

        do {
            System.out.println("Please enter password: ");
            password = input.nextInt();

            attempts++;

            if (password == 1234) {
                System.out.println("Welcome to Alpha programming!");
                break;
            } else {
                System.out.println("Wrong password");
            }

        } while (attempts < 3);

        if(password != 1234){

            System.out.println("Your account is blocked");
        }
        
    }
}
