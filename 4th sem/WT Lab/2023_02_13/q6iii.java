public class q6iii {
    final void display(){
        System.out.println("Final method");
    }
    public static void main(String[] args){
        class child extends q6iii{
            void display(){
                System.out.println("Overridden method");
            }
        }
        child obj = new child();
        obj.display();
    }
}
