#include<iostream>
using namespace std;

class Time{
    int hour, minute, seconds;
    public:
    Time(){
        hour = rand()%60;
        minute = rand()%60;
        seconds = rand()%60;
    }
    void display(){
        cout<<hour<<":"<<minute<<":"<<seconds<<endl;
    }
    friend Time sum(Time, Time);
};

Time sum(Time t1, Time t2){
    t1.seconds += t2.seconds;
    if (t1.seconds >= 60){
        t1.minute += t1.seconds/60;
        t1.seconds %= 60;
    }
    t1.minute += t2.minute;
    if (t1.minute >= 60){
        t1.hour += t1.minute/60;
        t1.minute %= 60;
    }
    t1.hour += t2.hour;
    return t1;
}

int main(){
    Time T1, T2;
    T1.display();
    T2.display();
    Time res = sum(T1, T2);
    res.display();
    return 0;
}