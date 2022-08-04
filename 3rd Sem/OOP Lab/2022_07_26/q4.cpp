#include<iostream>
using namespace std;

//4.Write a program to find out the area of a circle and volume of a sphere by using function overloading concept. 
//(Use one function name as AREA-VOL)

float area_vol(int x);
float area_vol(float x);

int main(){
    int r1;
    float r2;

    cout<<"Enter radius of circle: ";
    cin>>r1;
    cout<<"Enter radus of sphere: ";
    cin>>r2;

    cout<<"Area of circle: "<<(float)area_vol(r1)<<endl;
    cout<<"Volume of sphere: "<<(float)area_vol(r2)<<endl;

    return 0;
}

float area_vol(int x){
    float res = 3.1416*x*x;
    return res;
}

float area_vol(float x){
    float res =  (4*3.1416*x*x*x)/3.0;
    return res;
}