import javax.swing.*;
import java.awt.*;

public class Button2{
    public static void main(String[] args){
         Button2 gui= new Button2();
         gui.go();
    }
    public void go(){
         JFrame frame = new JFrame();
//         JButton button = new JButton("click me");
//         Font bigFont = new Font("serif",Font.BOLD,28);
//         button.setFont(bigFont);


         JButton east = new JButton("east");
         JButton west = new JButton("west");
         JButton south = new JButton("south");
         JButton north = new JButton("north");
         JButton center = new JButton("center");
         frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);        
         frame.getContentPane().add(BorderLayout.NORTH,north);
         frame.getContentPane().add(BorderLayout.SOUTH,south);
         frame.getContentPane().add(BorderLayout.WEST,west);
         frame.getContentPane().add(BorderLayout.EAST,east);
         frame.getContentPane().add(BorderLayout.CENTER,center);

         frame.setSize(200,200);
         frame.setVisible(true);
   }

}
