import javax.swing.*;
import java.awt.*;

public class Button1{
    public static void main(String[] args){
         Button1 gui= new Button1();
         gui.go();
    }
    public void go(){
         JFrame frame = new JFrame();
         JButton button = new JButton("click me");
         Font bigFont = new Font("serif",Font.BOLD,28);
         button.setFont(bigFont);
         frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);        
         frame.getContentPane().add(BorderLayout.NORTH,button);

         frame.setSize(200,200);
         frame.setVisible(true);
   }

}