#include<iostream>
using namespace std;

class Triangle{
    int base, height;
    public:
    void get_data(){
        cout<<"Enter base of the triangle: ";
        cin>>base;
        cout<<"Enter height of the triangle: ";
        cin>>height;
    }
    void area_Trin(){
        cout<<"Area of the triangle is: "<<base*height*0.5<<endl;
    }
};

int main(){
    Triangle tri[10];
    for (int i = 0; i < 10; i++)
    {
        cout<<"For triangle "<<i+1<<endl;
        tri[i].get_data();
        tri[i].area_Trin();
        cout<<endl;
    }

    return 0;    
}