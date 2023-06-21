/*Write a program in java to count number of words, characters and sentences from a
file and display the count. */

import java.io.*;

class q4
{
    public static void main(String args[]) throws IOException
    {
        FileInputStream fin = new FileInputStream("f2.txt");
        int i,words=1,characters=0,sentences=1;
        while((i=fin.read())!=-1)
        {
            if(i==32){
                words++;
            }
            if(i==13){
                sentences++;
            }
            characters++;
        }
        System.out.println("Words: "+words);
        System.out.println("Characters: "+characters);
        System.out.println("Sentences: "+sentences);
        fin.close();
    }
}