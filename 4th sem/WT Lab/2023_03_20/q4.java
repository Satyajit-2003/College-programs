abstract class Shape{
    abstract double volume();
}

class Sphere extends Shape{
    double r;
    Sphere(double r){
        this.r = r;
    }
    double volume(){
        return (4/3)*3.14*r*r*r;
    }
}

class cylinder extends Shape{
    double r, h;
    cylinder(double r, double h){
        this.r = r;
        this.h = h;
    }
    double volume(){
        return 3.14*r*r*h;
    }
}

class cone extends Shape{
    double r, h;
    cone(double r, double h){
        this.r = r;
        this.h = h;
    }
    double volume(){
        return (1/3)*3.14*r*r*h;
    }
}

class cube extends Shape{
    double a;
    cube(double a){
        this.a = a;
    }
    double volume(){
        return a*a*a;
    }
}

public class q4 {
    
    public static void main(String[] args) {
        Shape s = new Sphere(1);
        System.out.println(s.volume());
        s = new cylinder(1, 2);
        System.out.println(s.volume());
        s = new cone(1, 2);
        System.out.println(s.volume());
        s = new cube(1);
        System.out.println(s.volume());
    }
}
