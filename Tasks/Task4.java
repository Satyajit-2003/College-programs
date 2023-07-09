import java.util.Scanner;

class Task4{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String choice[] = {"Rock", "Paper", "Scissors"};
        System.out.println("------------------------------------------");
        System.out.println("|   WELCOME TO ROCK PAPER SCISSORS GAME  |");
        System.out.println("------------------------------------------");

        while (true){
            System.out.println("Enter your choice: ");
            System.out.println("1. Rock");
            System.out.println("2. Paper");
            System.out.println("3. Scissors");
            System.out.println("4. Exit");
            System.out.print("Enter your choice: ");
            int userChoice = sc.nextInt();
            if (userChoice == 4){
                break;
            }
            else if (userChoice > 4 || userChoice < 1){
                System.out.println("Invalid choice! Try again!");
                continue;
            }
            userChoice -= 1;
            int computerChoice = (int)(Math.random() * 2);
            System.out.println("Computer choice: " + choice[computerChoice]);
            System.out.println("Your choice: " + choice[userChoice]);
            if (userChoice == computerChoice){
                System.out.println("Game draw!");
            }
            else if (userChoice == 1 && computerChoice == 2){
                System.out.println("You lost!");
            }
            else if (userChoice == 2 && computerChoice == 0){
                System.out.println("You lost!");
            }
            else if (userChoice == 0 && computerChoice == 1){
                System.out.println("You lost!");
            }
            else{
                System.out.println("You won!");
            }
            System.out.println('\n');
        }
        sc.close();
    }
}