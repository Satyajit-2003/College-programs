public class q1 {
    void volume(int r) {
        System.out.println("Volume of Sphere: " + (4 / 3 * 3.14 * r * r * r));
    }
    void volume(int b, int h, int H){
        System.out.println("Volume of Prism: " + 0.5*(b*h)*H);
    }

    void volume(int r, int h){
        System.out.println("Volume of Cylinder: " + 3.14*r*r*h);
    }

    class Shape{
        Shape(int r, int h){
            System.out.println("Volume of Cone: " + 0.33*3.14*r*r*h);
        }

        Shape(int l, int b, int h){
            System.out.println("Volume of Cuboid: " + l*b*h);
        }
    }

    public static void main(String[] args) {
        q1 obj = new q1();
        obj.volume(5);
        obj.volume(5, 6, 7);
        obj.volume(5, 6);
        obj.new Shape(5, 6);
        obj.new Shape(5, 6, 7);
    }

}
