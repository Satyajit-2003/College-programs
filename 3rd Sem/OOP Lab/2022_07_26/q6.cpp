#include<iostream>
using namespace std;

//6.Write a program to find the summation of three numbers by using one function only with function name SUM having three arguments. 
//If at run time one argument is given to the function SUM, then second and third argument will be assumed by 
//default as 10 and 20 respectively. 
//If two arguments are given at run time, then third argument will be assumed as 20. 
//Use function with default argument concepts.

void sum(int x, int y=10, int z=20);

int main(){
    int x, y;
    cout<<"Enter 1st argument: ";
    cin>>x;
    cout<<"Enter 2nd argument: ";
    cin>>y;

    cout<<"When 1 argument is passed: "<<endl;
    sum(x);

    cout<<"When 2 arguments are passed: "<<endl;
    sum(x,y);

    return 0;
}

void sum(int x, int y, int z){
    int res = x+y+z;
    cout<<"The sum is: "<<res<<endl;
}
