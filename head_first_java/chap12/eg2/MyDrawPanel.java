import java.awt.*;
import javax.swing.*;

class MyDrawPanel extends JPanel {
    public void paintComponent(Graphics g){
        //Graphics2D g2d = (Graphics2D) g;
        g.setColor(Color.orange);
        g.fillRect(20,50,100,100);
        
    }
}
