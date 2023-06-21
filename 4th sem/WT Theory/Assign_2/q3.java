/*Write a program to apply the following methods on user entered string.” I am proud to be a KIIT
Student ”. Display the output on applying each method. 1) replace()
2) trim()
3) spilt()
4) charat()
5) substring() */


public class q3
{
    public static void main(String[] args)
    {
        String s = "I am proud to be a KIIT Student";
        System.out.println(s.replace("proud", "not proud"));
        System.out.println(s.trim());
        String[] arr = s.split(" ");
        for  (int i = 0; i < arr.length; i++){
            System.out.println(arr[i]);
        }
        System.out.println("The character at index 8"+" is "+s.charAt(8));
        System.out.println("The substring from index 9 is "+s.substring(9));
    }
}