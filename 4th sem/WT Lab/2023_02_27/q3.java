class data{
    int hei, bre;
    void get_data(int hei, int bre){
        this.hei = hei;
        this.bre = bre;
    }
    void put_data(){
        System.out.println("Height: "+ hei);
        System.out.println("Breadth: "+ bre);
    }
}

class rectangle extends data{
    void area(){
        System.out.println("Area: " + hei * bre);
    }
    void perimeter(){
        System.out.println("Perimeter: "+2*(hei + bre));
    }
}

class triangle extends data{
    void area(){
        System.out.println("Area: "+ (0.5 * bre * hei) );
    }
    void perimeter(){
        System.out.println("Perimeter: "+ (9 + bre+hei));
    }
}

public class q3 {
    public static void main(String[] args){
        triangle t1 = new triangle();
        rectangle r1 = new rectangle();

        t1.get_data(10, 20);
        r1.get_data(15, 25);

        t1.area();
        t1.perimeter();
        r1.area();
        r1.perimeter();
    }
}
