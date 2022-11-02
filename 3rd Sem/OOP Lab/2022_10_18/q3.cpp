#include<iostream>
using namespace std;

/*Create a class test. The class has 3 data members x,y,z. 
display the negative form of x,y,z by using overloaded unary - operator as member function*/

class xyz{
    int x,y, z;
    public:
    xyz(){
        x = rand()%100;
        y = rand()%100;
        z = rand()%100;
    }
    void operator-(){
        x = -x;
        y = -y;
        z = -z;
    }
    void display(){
        cout<<x<<' '<<y<<' '<<z<<endl;
    }
};

int main(){
    xyz x1;
    x1.display();
    -x1;
    x1.display();

    return 0;
}