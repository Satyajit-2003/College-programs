#include<iostream>
using namespace std;

class number{
    int a, b;
    public:
    number(){
        a = 5;
        b = 6;
    }
    number operator+(int n){
        number temp;
        temp.a = a + n;
        temp.b = b + n;
        return temp;
    }
    friend number operator+(int n, number n1){
        n1.a = n1.a + n;
        n1.b = n1.b + n;
        return n1;
    }
    friend void operator<<(ostream &out, number n1){
        out<<n1.a<<' '<<n1.b<<endl;
    }
};

int main(){
    number n1, sum1, sum2;
    sum1 = n1 + 10;
    sum2 = 11 + n1;
    cout<<sum1;
    cout<<sum2;

    return 0;
}