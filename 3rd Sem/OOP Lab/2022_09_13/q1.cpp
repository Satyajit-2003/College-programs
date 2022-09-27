#include<iostream>
using namespace std;

class A{
    int a;
};

class B: public virtual A{
    int b;
};

class C: public virtual A{
    int c;
};

class D: public B{
    int d;
};

class E: public B, public C{
    int e;
};

int main(){
    //B single inheritance
    //D multilevel inheritance
    //E multipath inheritance
}