#include<iostream>
using namespace std;

/*program to perform following using operator overloading.
Unary+
unary++
unary--*/

class xyz{
    int x, y;
    public:
    xyz(){
        x = -rand()%10;
        y = -rand()%10;
    }
    void operator+(){
        if (x<0)
            x = -x;
        if (y<0)
            y = -y;
    }
    void operator++(int){
        x++;
        y++;
    }
    void operator--(int){
        x--;
        y--;
    }

    void display(){
        cout<<x<<' '<<y<<endl;
    }
};

int main(){
    xyz x;
    x.display();
    +x;
    x.display();
    x++;
    x.display();
    x--;
    x.display();

    return 0;
}