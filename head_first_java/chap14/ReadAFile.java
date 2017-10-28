import java.io.*;

public class ReadAFile{
    public static void main(String[] args){
        try{
            File myfile = new File("xieguoyong.txt");
            FileReader fr =new FileReader(myfile);
   
            BufferedReader br = new BufferedReader(fr);

            String line = null;

            while((line = br.readLine())!=null ){
                System.out.println(line);
            }

            br.close();

        }catch(Exception ex){
            ex.printStackTrace();
        }
    }
}
