#include<iostream>
using namespace std;

template <class T1>
void Swap(T1 &ele1, T1 &ele2){
    ele1 = ele1 + ele2;
    ele2 = ele1 - ele2;
    ele1 = ele1 - ele2;
}

int main(){
    int a = 5, b = 9;
    cout<<"Before swapping: "<<a<<' '<<b<<endl;
    Swap(a, b);
    cout<<"After swapping: "<<a<<' '<<b<<endl;

    char c = 'C', d = 'D';
    cout<<"Before swapping: "<<c<<' '<<d<<endl;
    Swap(c, d);
    cout<<"After swapping: "<<c<<' '<<d<<endl;

    float e = 8.9, f = 9.8;
    cout<<"Before swapping: "<<e<<' '<<f<<endl;
    Swap(e, f);
    cout<<"After swapping: "<<e<<' '<<f<<endl;

    

    return 0;
}