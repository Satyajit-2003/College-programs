/*Write a program in java to compare two files and check the content in both files
are equal or not. Display a message accordingly.  */

import java.io.*;

class q2
{
    public static void main(String args[]) throws IOException
    {
        FileInputStream fin1 = new FileInputStream("bio.txt");
        FileInputStream fin2 = new FileInputStream("bio.txt");
        int i=0,j=0;
        while(true){
            i = fin1.read();
            j = fin2.read();
            if ((i==-1 && j != -1) || (i != -1 && j == -1)){
                System.out.println("Files are not equal");
                break;
            }
            if(i==-1 && j==-1){
                System.out.println("Files are equal");
                break;
            }
            if(i != j){
                System.out.println("Files are not equal");
                break;
            }
        }
        
        fin1.close();
        fin2.close();
    }
}