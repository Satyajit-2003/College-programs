/*WAP in java to work on following functions on strings “welcome to Java
Programming” ,, “hello world” “hello” “good morning” 
A. concat(), isempty(),split(), 
trim(), uppercase(), lowercase(),replace(),
intern(), indexof(), getbytes(), substring() */

public class q6{
    public static void main(String[] args) {
        String s = "welcome to Java Programming";
        String s1 = "hello world";

        System.out.println(s.concat(s1));
        System.out.println(s1.isEmpty());
        String[] arr = s.split(" ");
        for(String i: arr)
            System.out.println(i);
        System.out.println(s.trim());
        System.out.println(s.toUpperCase());
        System.out.println(s.toLowerCase());
        System.out.println(s.replace("Java", "C++"));
        System.out.println(s.intern());
        System.out.println(s.indexOf("Java"));
        System.out.println(s.getBytes());
        System.out.println(s.substring(0, 5));
    }
}