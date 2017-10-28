package com.headfirstjava;
class TestSync implements Runnable{
    private int balance;
    public void run(){
        for (int i =0;i<50;i++){
            increament();
            System.out.println("balance is : " + balance);
        }
    }
    public synchronized void increament(){
        int i = balance;
        balance = i+1;
    }
}

public class TestSyncTest{
    public static void main(String[] args){
        TestSync work = new TestSync();
        Thread a = new Thread(work);
        Thread b = new Thread(work);

        a.start();
        b.start();
    }
}
