/*Write a program to create a class named shape. It should contain 2 methods- draw() and erase()
which should print “Drawing Shape” and “Erasing Shape” respectively. For this class we have three
sub classes- Circle, Triangle and Square and each class override the parent class functions- draw() and erase (). The draw() method should print “Drawing Circle”, “Drawing Triangle”, “Drawing
Square” respectively. The erase() method should print “Erasing Circle”, “Erasing Triangle”, “Erasing
Square” respectively. Create objects of Circle, Triangle and Square and observe the polymorphic
nature of the class by calling draw() and erase() method using each object. */


class shape{
    void draw(){
        System.out.println("Drawing Shape");
    }
    void erase(){
        System.out.println("Erasing Shape");
    }
}

class Circle extends shape{
    void draw(){
        System.out.println("Drawing Circle");
    }
    void erase(){
        System.out.println("Erasing Circle");
    }
}

class Triangle extends shape{
    void draw(){
        System.out.println("Drawing Triangle");
    }
    void erase(){
        System.out.println("Erasing Triangle");
    }
}

class Square extends shape{
    void draw(){
        System.out.println("Drawing Square");
    }
    void erase(){
        System.out.println("Erasing Square");
    }
}

public class q4{
    public static void main(String[] args){
        shape s = new shape();
        Circle c = new Circle();
        Triangle t = new Triangle();
        Square sq = new Square();
        s.draw();
        s.erase();
        c.draw();
        c.erase();
        t.draw();
        t.erase();
        sq.draw();
        sq.erase();
    }
}