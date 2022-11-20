#include<iostream>
using namespace std;

template<class T>
T sum(T a, T b){
    return a + b;
}

template<class T>
T sum(T a, T b, T c){
    return a+b+c;
}

int main(){
    cout<<"5 + 9 = "<<sum(5,9)<<endl;
    cout<<"2 + 6 + 7 = "<<sum(2,6,7)<<endl;
    cout<<"5.1 + 9.2 = "<<sum(5.1,9.2)<<endl;
    cout<<"2.3 + 6.4 + 7.5 = "<<sum(2.3,6.4,7.5)<<endl;
    cout<<"A + B = "<<sum('A', 'B')<<endl;
    cout<<"A + B + C = "<<sum('A', 'B', 'C')<<endl;
}