#include<iostream>
#include<math.h>
using namespace std;

//Constructor default argument to find power of x and y

class c1{
    public:
    c1(int a = 2, int b = 6){
        cout<<a<<" ^ "<<b<<" = "<<pow(a, b)<<endl;
    }
};

int main(){
    c1 o1;
    c1 o2(4);
    c1 o3(3,2);
}