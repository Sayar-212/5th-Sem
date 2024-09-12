import java.util.Scanner;
public class Lottery {
    public static void main(String[] args) {
        int lottery = (int)(Math.random() * 90 + 10);
        Scanner input = new Scanner(System.in);
        System.out.print("Enter your lottery pick (two digits): ");
        int userInput = input.nextInt();
        int ld1 = lottery / 10;
        int ld2 = lottery % 10;
        int uD1 = userInput / 10;
        int uD2 = userInput % 10;
        System.out.println("The lottery number is: " + lottery);
        if (userInput == lottery) {
            System.out.println("Exact match: You win Rs. 10000!");
        } else if ((uD1 == ld2 && uD2 == ld1)) {
            System.out.println("Match all digits: You win Rs. 3000!");
        } else if (uD1 == ld1 || uD1 == ld2 || uD2 == ld1 || uD2 == ld2){
            System.out.println("Match one digit: You win Rs. 1000!");
        } else {
            System.out.println("Sorry, no match.");
        }
    }
}
