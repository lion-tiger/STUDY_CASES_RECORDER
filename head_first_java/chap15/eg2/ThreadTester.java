

 class MyRunnable implements Runnable{
    public void run(){
        go();
    }
    void go(){
        doMore();
        System.out.println("go");
    }
    void doMore(){
        System.out.println("doMore");
    }
}

public class ThreadTester{
    public static void main(String[] args){
        Runnable threadJob = new MyRunnable();
        Thread myThread = new Thread(threadJob);
        try{
            myThread.start();
//            myThread.join();
            System.out.println("main");
        }catch (Exception ex){
            ex.printStackTrace();
        }
    }
}
