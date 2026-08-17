import java.util.*;

public class Main {

    public static void pt(Object value) {
        System.out.println(value);
    }

    public static void main(String[] args) {

        Scanner myLetter = new Scanner(System.in);

        pt("Enter letter: ");
        char letter = myLetter.nextLine().charAt(0);

        if (letter == 'O') {

            pt("Welcome to ATM");

            Scanner myCard = new Scanner(System.in);

            pt("Please enter you card: ");
            Boolean isCardValid = myCard.nextBoolean();

            if (isCardValid) {

                pt("Please enter your pin");

                Scanner myPin = new Scanner(System.in);
                int pin = myPin.nextInt();

                if (pin == 1234) {

                    Scanner myAmount = new Scanner(System.in);

                    pt("Please enter you amount: ");
                    int amount = myAmount.nextInt();

                    if (amount > 1000) {
                        pt("Insufficient balance.");
                        return;
                    } else {
                        pt("transaction successful.");
                    }

                } else {
                    pt("invalid pin");
                }

            }else{
              pt("Invalid card.");
            }

        } else {
            pt("Atm is closed.");
        }
    }
}
