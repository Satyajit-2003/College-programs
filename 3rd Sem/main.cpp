#include<iostream>
using namespace std;

class xyz{
    static int count;
    public:
    xyz(){
        count ++;
        cout<<count<<" Object created"<<endl;
    }
    ~xyz(){
        cout<<count<<" object destroyed"<<endl;
        count --;
    }
};
int xyz :: count;

int main(){
    {
    xyz x1, x2;
    }
    xyz x3;
}
