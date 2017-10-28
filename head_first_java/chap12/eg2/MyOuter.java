
public class MyOuter {
    private int x;
    MyInner inner = new MyInner();
    public void dostuff(){
        inter.go();
    }

    class MyInner{
        void go(){
            x=42;
        }
    }
}
