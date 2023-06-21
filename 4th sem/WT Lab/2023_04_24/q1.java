class shape{
    void draw(){
        System.out.println("Drawing Shape");
    }
    void erase(){
        System.out.println("Erasing Shape");
    }
}

class circle extends shape{
    void draw(){
        System.out.println("Drawing Circle");
    }
    void erase(){
        System.out.println("Erasing Circle");
    }
}

class triangle extends shape{
    void draw(){
        System.out.println("Drawing Triangle");
    }
    void erase(){
        System.out.println("Erasing Triangle");
    }
}

class square extends shape{
    void draw(){
        System.out.println("Drawing Square");
    }
    void erase(){
        System.out.println("Erasing Square");
    }
}

public class q1 {
    public static void main(String[] args) {
        shape s = new shape();
        shape c = new triangle();
        shape t = new circle();
        shape sq = new square();
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