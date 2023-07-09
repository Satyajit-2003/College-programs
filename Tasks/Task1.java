import java.util.Scanner;
import java.util.HashSet;

class Task1
{
        void infinite_Loop()
        {
            while (true)
            {
                System.out.println("Infinite");
            // Code to be executed indefinitely
            }
        }

        void executable_comment()
        {
              // This comment contains executable code
        // System.out.println("Hello, World!");
        }

        void named_Loop()
        {
            outerLoop: // Label for the outer loop
            for (int i = 1; i <= 3; i++) {
                innerLoop:                   // Label for the inner loop
                for (int j = 1; j <= 3; j++) 
                {
                    if (i == 2 && j == 2) 
                    {
                        break outerLoop; // Break out of the outer loop
                    }
                    System.out.println("i: " + i + ", j: " + j);
                }
            }
        }

        void single_duplicate()
        {
            int[] nums = {2, 3, 1, 5, 2, 4}; // Example array

            HashSet<Integer> set = new HashSet<>();

            for (int num : nums) 
            {
                if (set.contains(num)) 
                {
                    System.out.println("Single duplicate: " + num);
                    break;
                } 
                else 
                {
                    set.add(num);
                }
            }
        }

        void non_Unique_duplicates()
        {
             int[] nums = {2, 3, 1, 5, 2, 4, 3, 5}; // Example array

            for (int i = 0; i < nums.length - 1; i++) 
            {
                for (int j = i + 1; j < nums.length; j++)
                {
                    if (nums[i] == nums[j]) 
                    {
                        System.out.println("Non-unique duplicate: " + nums[i]);
                    }
                }
            }
        }
        public static void main(String args[])
        {
            Task1 t = new Task1();
            System.out.println("Enter no of Your Choice : ");
            System.out.println("1. Infinte Loop");
            System.out.println("2. Executable Comment");
            System.out.println("3. Named  Loop");
            System.out.println("4. Single Duplicate");
            System.out.println("5. Non-Unique Duplicate");

            Scanner sc = new Scanner(System.in);

            while(true)
            {
                int choice = sc.nextInt();
                switch(choice)
                {
                    case 1:
                        t.infinite_Loop();
                        break;
                    case 2:
                        t.executable_comment(); 
                        break;
                    case 3:
                        t.named_Loop();
                        break;
                    case 4:
                        t.single_duplicate();
                        break;
                    case 5:
                        t.non_Unique_duplicates();
                        break;
                    default:
                        System.out.println("Invalid Choice !!");
                }
            }
        }
}