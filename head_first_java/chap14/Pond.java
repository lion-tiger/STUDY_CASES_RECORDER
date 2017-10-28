import java.io.*;
public class Pond implements Serializable {
    private Duck duck = new Duck();
    public static void main(String[] args){
        Pond pond = new Pond();
        try{
            FileOutputStream fs = new FileOutputStream("pod.ser");
            ObjectOutputStream os = new ObjectOutputStream(fs);
            os.writeObject(pond);
            os.close();
        }catch(Exception ex){
            ex.printStackTrace();
        }
    }

    public  class Duck {
    }
}
