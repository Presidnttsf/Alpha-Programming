public class Main {
    public static void main(String[] args) {

        int x = 10;
        int y = 3;

        // 1. Parentheses ()
        int result1 = (x + y) * 2;
        System.out.println("Parentheses: " + result1);


        // 2. *, /, %
        System.out.println("Multiplication: " + (x * y));
        System.out.println("Division: " + (x / y));
        System.out.println("Modulus: " + (x % y));


        // 3. +, -
        System.out.println("Addition: " + (x + y));
        System.out.println("Subtraction: " + (x - y));


        // 4. >, <, >=, <=
        System.out.println("x > y: " + (x > y));
        System.out.println("x < y: " + (x < y));
        System.out.println("x >= y: " + (x >= y));
        System.out.println("x <= y: " + (x <= y));


        // 5. ==, !=
        System.out.println("x == y: " + (x == y));
        System.out.println("x != y: " + (x != y));


        // 6. &&
        boolean result2 = (x > 5) && (y < 5);
        System.out.println("AND: " + result2);


        // 7. ||
        boolean result3 = (x > 20) || (y < 5);
        System.out.println("OR: " + result3);


        // 8. =
        int z = 50;
        System.out.println("Assignment: " + z);

int result = 10 + 5 * 2 > 15 && 20 / 5 == 4 || 3 != 4 ? 1 : 0;

System.out.println("All operators in one line " + result);


    }
}
