import java.rmi.*;

public class MyRemoteClient{
    public static void main(String[] args){
        new MyRemoteClient().go();
    }

    public void go(){
        try{
           MyRemote service = (MyRemote)Naming.lookup("rmi://127.0.0.1/Remote Hello");
           String str = service.sayHello();
           System.out.println(str);

        }catch(Exception ex){
            ex.printStackTrace();
        }
    }
}
