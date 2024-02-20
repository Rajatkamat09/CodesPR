import java.util.Scanner;

public class A36 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Accept a string from the user
        System.out.print("Enter a string: ");
        String inputString = scanner.nextLine();

        // Reverse the string and toggle the case
        String result = reverseAndToggleCase(inputString);

        // Display the result
        System.out.println("Reversed string with toggled case: " + result);
    }

    private static String reverseAndToggleCase(String inputString) {
        StringBuilder reversed = new StringBuilder(inputString).reverse();

        for (int i = 0; i < reversed.length(); i++) {
            char currentChar = reversed.charAt(i);

            if (Character.isUpperCase(currentChar)) {
                reversed.setCharAt(i, Character.toLowerCase(currentChar));
            } else if (Character.isLowerCase(currentChar)) {
                reversed.setCharAt(i, Character.toUpperCase(currentChar));
            }
        }

        return reversed.toString();
    }
}