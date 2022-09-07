#include<iostream>
using namespace std;

//WAP to vcount the number of objects created using static variable

class abc{
    static int count;
    public:
    static void fun1(){
        count++;
    }
    void display(){
        cout<<"Number of objects: "<<count;
    }
};

int abc :: count;
int main(){
    abc a1,a2,a3;
    a1.fun1();
    a2.fun1();
    a3.fun1();
    a1.display();
}