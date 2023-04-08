class shape{
    double area;
    void ShowArea(){
        System.out.println("Area: "+area);
    }
}

class rectangle extends shape{
    rectangle(){
        int l = 5;
        int w = 6;
        
        super.area = l*w; 
    }
}

class circle extends shape{
    circle(){
        int r = 9;
        super.area = 3.14 * r * r;
    }
}

public class q2 {
    public static void main(String[] args){
        circle c1 = new circle();
        rectangle r1 = new rectangle();

        r1.ShowArea();
        c1.ShowArea();
    }
}
