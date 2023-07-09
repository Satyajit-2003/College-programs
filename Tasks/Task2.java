// Number Guessing Game

import java.util.Scanner;
import java.util.Random;

class Task2
{
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        String play = "yes";

        // while loop to determine if we are going to play again
        while(play.equalsIgnoreCase("yes"))
        {
            Random rand = new Random();
            int randNum =  rand.nextInt(100);
            int guess = -1;
            int tries = 0;

            // while loop to check if the game is over
            while(guess!=randNum)
            {
                System.out.print("Guess a number between 1 and 100 :");
                guess = sc.nextInt();
                tries++;

                if(guess == randNum)
                {
                    System.out.println("\n\tAWESOME !!! You won the game.");
                    System.out.println("\tIt only took you "+tries+" guesses !");
                    System.out.print("\tWould You like to play again ??\n\t\t Yes or No\\n");
                    play = sc.next();
                }
                else if(guess > randNum)
                {
                    System.out.println("Your guess is too high...Try again..");
                }
                else
                {
                    System.out.println("Your guess is too low...Try again..");
                }
            }
        }
        sc.close();
    }
}