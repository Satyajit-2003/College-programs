/*write a program in applet to divide an oval in 4 equal half's and display different
colors in it using applet programming */

import java.applet.*;
import java.awt.*;

public class q4 extends Applet
{
    public void paint(Graphics g)
    {
        g.setColor(Color.red);
        g.fillArc(100,100,200,200,0,90);
        g.setColor(Color.green);
        g.fillArc(100,100,200,200,90,90);
        g.setColor(Color.blue);
        g.fillArc(100,100,200,200,180,90);
        g.setColor(Color.yellow);
        g.fillArc(100,100,200,200,270,90);
    }
}