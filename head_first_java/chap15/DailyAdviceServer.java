import java.io.*;
import java.net.*;

public class DailyAdviceServer{
    public void go(){
        try{
            ServerSocket serverSocket = new ServerSocket(4242);
            while(true){
                Socket sock = serverSocket.accept();
                PrintWriter write = new PrintWriter(sock.getOutputStream());
                String s = "xie guoyong";
                write.println(s);
                write.close();
                System.out.println(s);

            }
         } catch (IOException ex){
                ex.printStackTrace();
         }
    }




    public static void main(String[] args){
        DailyAdviceServer das = new DailyAdviceServer();
        das.go();
    }
}
