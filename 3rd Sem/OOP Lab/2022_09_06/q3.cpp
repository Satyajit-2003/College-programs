#include<iostream>
using namespace std;

class abc{
    int a, b, c;
    public:
    abc(){
        cin>>a>>b>>c;
    }
    abc(abc &a2){
        a = a2.a;
        b = a2.b;
        c = a2.c;
    }
    void display(){
        cout<<a<<' '<<b<<' '<<c<<endl;
    }
};

int main(){
    abc a1;
    abc a2(a1);

    a2.display();
    return 0;
}