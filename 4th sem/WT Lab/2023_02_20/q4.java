public class q4 {
    public static void main(String[] args){
        class Shape{
            Shape(int r){
                System.out.println("Area of circle: " + 3.14*r*r);
            }
            Shape(int b, int h){
                System.out.println("Area of triangle: " + 0.5*b*h);
            }
            Shape(int l, float b){
                System.out.println("Area of rectangle: " + l*b);
            }
        }
        new Shape(5);
        new Shape(5, 6);
        new Shape(5, 6.0f);
    }   
}
