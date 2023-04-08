/*2. WAP in java to work on following functions on string “welcome to Java
Programming” ,, “hello world” “hello” “good morning” using stringBuffer class
A. append(),insert(), replace(),delete(),reverse(), capacity(), ensureCapacity(),charat() */

public class q7{
    public static void main(String[] args) {
        StringBuffer s = new StringBuffer("welcome to Java Programming");
        StringBuffer s1 = new StringBuffer("hello world");
        StringBuffer s2 = new StringBuffer("hello");
        StringBuffer s3 = new StringBuffer("good morning");

        System.out.println(s.append(s1));
        System.out.println(s.insert(0, "hello"));
        System.out.println(s.replace(0, 5, "good"));
        System.out.println(s.delete(0, 4));
        System.out.println(s.reverse());
        System.out.println(s.capacity());
        System.out.println(s.ensureCapacity(100));
        System.out.println(s.charAt(0));
    }
}