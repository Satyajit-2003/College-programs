/*Write a program in java to search all the special characters (like @,#,&,etc) from a file and then
copy them to another file. Display the new file which contains only special characters.*/

import java.io.*;

class q3{
    public static void main(String[] args) throws IOException
    {
        File f = new File("q3.txt");
        File f1 = new File("q3_1.txt");
        FileInputStream fis = new FileInputStream(f);
        FileOutputStream fos = new FileOutputStream(f1);
        int i;
        while((i=fis.read())!=-1){
            if(i>=33 && i<=47 || i>=58 && i<=64 || i>=91 && i<=96 || i>=123 && i<=126){
                fos.write(i);
            }
        }
        fis.close();
        fos.close();
    }
}