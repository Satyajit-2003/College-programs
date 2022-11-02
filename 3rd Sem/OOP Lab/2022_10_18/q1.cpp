#include<iostream>
using namespace std;

/*WAP to overload unary - operator*/

class xyz{
    int x,y;
    public:
    xyz(){
        x = rand()%100;
        y = rand()%100;
    }
    void operator-(){
        x = -x;
        y = -y;
    }
    void display(){
        cout<<x<<' '<<y<<endl;
    }
};

int main(){
    xyz x1;
    x1.display();
    -x1;
    x1.display();

    return 0;
}