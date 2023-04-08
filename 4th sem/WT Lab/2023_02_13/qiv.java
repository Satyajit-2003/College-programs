public class qiv {
    final class parent{
        void display(){
            System.out.println("Final method");
        }
    }
    public static void main(String[] args){
        class child extends parent{
            void display(){
                System.out.println("Overridden method");
            }
        }
        child obj = new child();
        obj.display();
    }
}
