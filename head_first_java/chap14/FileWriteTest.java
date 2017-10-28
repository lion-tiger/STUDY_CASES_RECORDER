import java.io.*;

public class FileWriteTest{
    public static void main(String[] args){
        try{
            FileWriter w = new FileWriter("xieguoyong.txt");
            w.write("i amd xie");
            w.close();

        }catch(IOException ex){
            ex.printStackTrace();
        }
    }
}
