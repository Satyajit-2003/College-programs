class plate{
    int length, width;
    plate(){
        length = 1;
        width = 2;

        System.out.println("Plate class: ");
        System.out.println("Length: "+length);
        System.out.println("Width: "+width);
    }
}

class box extends plate{
    int height;
    box(){
        height = 9;

        System.out.println("Box class: ");
        System.out.println("Length: "+length);
        System.out.println("Width: "+width);
        System.out.println("Height: "+height);
    }
}

class wood_box extends box{
    int thick;

    wood_box(){
        thick=4;

        System.out.println("Wood_box class: ");
        System.out.println("Length: "+length);
        System.out.println("Width: "+width);
        System.out.println("Height: "+height);
        System.out.println("Thick: "+thick);
    }
}

public class q1 {
    public static void main(String[] args){
        new wood_box();
    }
}
