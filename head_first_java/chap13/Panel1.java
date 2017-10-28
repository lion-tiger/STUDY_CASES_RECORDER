import javax.swing.*;
import java.awt.*;

public class Panel1{
    public static void main(String[] args){
        Panel1 panel = new Panel1();
        panel.go();
    }

    public void go(){
         JFrame frame = new JFrame();
         JPanel panel = new JPanel();
//         panel.setBackground(Color.darkGray);
         panel.setBackground(Color.blue);
//         panel.setLayout(new BoxLayout(panel,BoxLayout.Y_AXIS));


         JButton button = new JButton("shock me");
         panel.add(button);

         JButton button2 = new JButton("bliss");
         panel.add(button2);

         frame.getContentPane().add(BorderLayout.EAST,panel);
         frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
 
//         frame.setSize(2560,1440);
         frame.setSize(250,200);
         frame.setVisible(true);
    }
}
