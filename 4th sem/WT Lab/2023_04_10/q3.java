/*Write a program in java to read a sentence from a file and convert the lower case
letters to uppercase and vice-versa and also convert the vowels into ‘@’ symbol and
write to same file.  */

import java.io.*;

class q3
{
    public static void main(String args[]) throws IOException
    {
        FileInputStream fin = new FileInputStream("f1.txt");
        StringBuffer sb = new StringBuffer(100);
        int i;
        while ((i = fin.read()) != -1 ){
            if (i == 65 || i == 69 || i == 73 || i == 79 || i == 85 || i == 97 || i == 101 || i == 105 || i == 111 || i == 117){
                i = (int)'@';
            }
            else if (i >= 65 && i <= 90){
                i += 32;
            }
            else if (i >= 97 && i <= 122){
                i -= 32;
            }
            sb.append((char)i);           
        }
        fin.close();
        FileOutputStream fout = new FileOutputStream("f1.txt");
        fout.write(sb.toString().getBytes()); 
        fout.close();
    }
}