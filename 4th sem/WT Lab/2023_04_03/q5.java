/*WAP in java to work on following functions in string “welcome to Java
Programming” A.equals, ==, compareto, equalsIgnoreCase, length */

public class q5{
    public static void main(String[] args) {
        String s = "welcome to Java Programming";
        String s1 = "welcome to Java Programming";
        String s2 = "Welcome to Java Programming";

        System.out.println(s.equals(s1));
        System.out.println(s == s1);
        System.out.println(s.compareTo(s1));
        System.out.println(s.equalsIgnoreCase(s2));
        System.out.println(s.length());

    }
}