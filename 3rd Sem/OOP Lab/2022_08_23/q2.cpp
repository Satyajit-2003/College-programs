#include<iostream>
using namespace std;

//Create a class TIME with members hour, minute and second. Write a program that adds two time objects. 
//The objects must be passed as function arguments.

class Time{
    int hour, minute, second;
    public:
    void get(){
        cout<<"Enter hour: ";
        cin>>hour;
        cout<<"Enter minute: ";
        cin>>minute;
        cout<<"Enter seconds: ";
        cin>>second;
    }
    void display(){
        cout<<hour<<" hours "<<minute<<" minutes "<<second<<" seconds";
    }
    
    friend Time add(Time t1, Time t2){
        int rem = 0;
        t1.second = t1.second + t2.second;
        if (t1.second > 60){
            rem = t1.second / 60;
            t1.second %= 60;
        }
        t1.minute = t1.minute + t2.minute + rem;
        rem = 0;
        if (t1.minute > 60){
            rem = t1.minute / 60;
            t1.minute %= 60;
        }
        t1.hour = t1.hour + t2.hour + rem;
        return t1;
    }
};

int main(){
    Time t1, t2, res;
    t1.get();
    t2.get();
    res = add(t1, t2);
    cout<<"The sum is: ";
    res.display();
    return 0;
}