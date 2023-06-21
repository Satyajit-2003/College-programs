/*Write a program in java write and read your biodata in a file in byte form and
character form using FileInputStream, FileOutputStream, FileReader and FileWriter
classes. */

import java.io.*;
class q1
{
    public static void main(String args[]) throws IOException
    {
        FileOutputStream fout = new FileOutputStream("bio.txt");
        FileInputStream fin = new FileInputStream("bio.txt");
        FileWriter fw = new FileWriter("bio.txt");
        FileReader fr = new FileReader("bio.txt");
        String s = "Name: Satyajit\nRoll No: 2105576\nBranch: CSE";
        byte b[] = s.getBytes();
        fout.write(b);
        int i;
        while((i=fin.read())!=-1)
        {   
            System.out.print((char)i);
        }
        fw.write(s);
        fw.close();
        int j;
        System.out.println("\n");
        while((j=fr.read())!=-1)
        {
            System.out.print((char)j);
        }
        fr.close();
        fin.close();
        fout.close();
    }
}