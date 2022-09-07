#include<iostream>
using namespace std;

//5.Write a program to find out area or volume of an shape/object by using one function name as FUN-AREA only.
// If the function takes one argument then it will calculate area of a circle, 
//two argument for area of rectangle and three argument volume of a box. 
//If no argument is given to the function, then it will display appropriate message.

void fun_area(int x);
void fun_area(int x, int y);
void fun_area(int x, int y, int z);
void fun_area();

int main(){
    int x, y, z;
    cout<<"Enter 1st argument: ";
    cin>>x;
    cout<<"Enter 2nd argument: ";
    cin>>y;
    cout<<"Enter 3rd argument: ";
    cin>>z;

    fun_area(x);
    cout<<endl;

    fun_area(y,z);
    cout<<endl;

    fun_area(x,y,z);
    cout<<endl;

    cout<<"If no arguments are passed: "<<endl;
    fun_area();

    return 0;
}

void fun_area(int x){
    cout<<"Area of circle is: "<<(float)3.1416*x*x;
}

void fun_area(int x, int y){
    cout<<"Area of rectangle: "<<x*y;
}

void fun_area(int x, int y, int z){
    cout<<"Volume of box: "<<x*y*z;
}

void fun_area(){
    cout<<"Please enter one or more arguments"<<endl;
}