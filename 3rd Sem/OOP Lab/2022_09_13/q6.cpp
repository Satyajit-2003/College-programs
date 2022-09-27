#include<iostream>
using namespace std;

class Employee{
    protected:
    char name[20];
    int id;
    int salary;
};

class Regular: public Employee{
    int da;
    int hra;
    int basic;
    public:
    void get(){
        cout<<"Enter DA: ";
        cin>>da;
        cout<<"Enter HRA: ";
        cin>>hra;
        cout<<"Enter basic salary: ";
        cin>>basic;
    }
    void total(){
        cout<<"Total salary: "<<da+hra+basic<<endl;
    }
};

class part_time: public Employee{
    int pph;
    int hour;
    public:
    void get(){
        cout<<"Enter Pay for hour: ";
        cin>>pph;
        cout<<"Enter Work hours: ";
        cin>>hour;
    }
    void total(){
        cout<<"Total salary: "<<pph*hour<<endl;
    }
};

int main(){
    Regular r;
    part_time p;
    r.get();
    r.total();

    p.get();
    p.total();
}