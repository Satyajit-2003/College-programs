/*Write a program in java to create a class TwoDshape having private data members width, height, name with default, parameterized constructors which initializes data members of class & copy
constructor to copy one object values to another object. It also contains Member funcitons
getWidth(), getHeight(), setWidth(double), setHeight(double), getName(), setName(String), showDimensions() and an abstract method double area(). Derive classes Traingle and Rectangle withall constructors in both the sub classes. The sub classes also contain Member Function double area() . Finally find the area of Triangle and Rectangle by overriding TwoDshape area() method.  */


import java.util.Scanner;

abstract class TwoDshape
{
    private double width;
    private double height;
    private String name;
    TwoDshape(){
        width = height = 0.0;
        name = "none";
    }
    TwoDshape(double w, double h, String n) {
        width = w;
        height = h;
        name = n;
    }
    TwoDshape(TwoDshape ob){
        width = ob.width;
        height = ob.height;
        name = ob.name;
    }
    TwoDshape(double x, String n){
        width = height = x;
        name = n;
    }
    double getWidth(){
        return width;
    }
    double getHeight(){
        return height;
    }
    void setWidth(double w){
        width = w;
    }
    void setHeight(double h){
        height = h;
    }
    String getName() {
        return name;
    }
    void setName(String n){
        name = n;
    }
    void showDimensions(){
        System.out.println("Width and height are "+width+" and "+height);
    }
    abstract double area();
}

class Triangle extends TwoDshape
{
    private String style;
    Triangle(){
        super();
        style = "none";
    }
    Triangle(String s, double w, double h){
        super(w, h, "Triangle");
        style = s;
    }
    Triangle(double x){
        super(x, "Triangle");
        style = "filled";
    }
    Triangle(Triangle ob){
        super(ob);
        style = ob.style;
    }
    double area(){
        return getWidth()*getHeight()/2;
    }
    void showStyle(){
        System.out.println("Triangle is "+style);
    }
}

class Rectangle extends TwoDshape
{
    Rectangle(){
        super();
    }
    Rectangle(double w, double h){
        super(w, h, "Rectangle");
    }
    Rectangle(Rectangle ob){
        super(ob);
    }
    double area(){
        return getWidth()*getHeight();
    }
}

public class q2{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the dimensions of the triangle");
        double w = sc.nextDouble();
        double h = sc.nextDouble();
        Triangle t1 = new Triangle("filled", w, h);
        System.out.println("Enter the dimensions of the rectangle");
        w = sc.nextDouble();
        h = sc.nextDouble();
        Rectangle r1 = new Rectangle(w, h);
        System.out.println("The area of the triangle is "+t1.area());
        System.out.println("The area of the rectangle is "+r1.area());
        sc.close();
    }
}