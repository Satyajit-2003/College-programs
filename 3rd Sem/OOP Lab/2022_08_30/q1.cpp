#include<iostream>
using namespace std;

//Write a program to find out the area of an rectangle through friend function and member function separately of Rectangle class

class Rectangle{
    int len, bred, area;
    public:
    void get(){
        cout<<"Length: ";
        cin>>len;
        cout<<"Breadth: ";
        cin>>bred;
    }
    void member_area(){
        area = len * bred;
        cout<<"Area is: "<< area<<endl;
    }
    friend void friend_area(Rectangle rect){
        cout<<"Area is: "<<rect.len * rect.bred;
    }
};

int main(){
    Rectangle r1;
    r1.get();
    r1.member_area();
    friend_area(r1);

    return 0;
}