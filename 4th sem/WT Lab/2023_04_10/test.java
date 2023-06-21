import java.io.*;

class test
{
    public static void main(String args[]) throws Exception
    {
        FileInputStream fout = new FileInputStream("f2.txt");
        FileInputStream fin = new FileInputStream("f1.txt");
        int i=0;
        int j=0;
        while(i != -1 || j != -1)
        {
            i = fin.read();
            j = fout.read();
            if(i != j)
            {
                System.out.println("Files are not same");
                break;
            }
        }
        if(i==-1 && j==-1)
        {
            System.out.println("files are same");
        }
        fin.close();
        fout.close();
    }
}