#include<iostream>
using namespace std;

//3.Write a program to demonstrate the concept of 
//call-by-value, call-by-reference & call-by address by taking swapping of two numbers as an example.

void swap(int x, int y); //csll by value
void swap1(int &x, int &y); //call by refer
void swap2(int *x, int *y); //call by adress

int main(){
    int x, y;
    cout<<"Enter 1st number: ";
    cin>>x;
    cout<<"Enter 2nd number: ";
    cin>>y;
    cout<<endl;

    swap(x,y);
    cout<<"[MAIN] After Swapping by call by value: ";
    cout<<x<<' '<<y<<endl<<endl;
    
    swap1(x,y);
    cout<<"[MAIN] After Swapping by call by reference: ";
    cout<<x<<' '<<y<<endl<<endl;

    swap2(&x , &y);
    cout<<"[MAIN] After Swapping by call by address: ";
    cout<<x<<' '<<y<<endl<<endl;
    
    return 0;
}

void swap(int x, int y){
    x = x+y;
    y = x-y;
    x = x-y;
    cout<<"Call by value inside swap function: ";
    cout<<x<<' '<<y<<endl;
}
void swap1(int &x, int &y){
    x = x+y;
    y = x-y;
    x = x-y;
    cout<<"Call by reference inside swap function: ";
    cout<<x<<' '<<y<<endl;
}
void swap2(int *x, int *y){
    *x = *x+*y;
    *y = *x-*y;
    *x = *x-*y;
    cout<<"Call by address inside swap function: ";
    cout<<*x<<' '<<*y<<endl;
}
