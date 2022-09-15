#include<iostream>
using namespace std;

class Student{
    protected:
    char name[20];
    int roll, age;
};

class test: public Student{
    protected:
    int marks[5];
    public:
    void get(){
        cout<<"Enter name: ";
        cin>>name;
        cout<<"Enter roll number: ";
        cin>>roll;
        cout<<"Enter age: ";
        cin>>age;
        for (int i = 0; i < 5; i++){
            cout<<"Enter marks of subject "<<i+1<<": ";
            cin>>marks[i];
        }
    }
    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"Roll: "<<roll<<endl;
        cout<<"Age: "<<age<<endl;
        for (int i = 0; i< 5;i++){
            cout<<"Mark in subject "<<i+1<<": "<<marks[i]<<endl;
        }
    }
};

class mark_perc: public test{
    int mark, percent;
    public:
    void calc_mark(){
        mark = marks[0] + marks[1] + marks[2] + marks[3] + marks[4];
        percent = mark/5;
        cout<<"Total marks: "<<mark<<endl;
        cout<<"Percentage: "<<percent<<endl;
    }
};

int main(){
    mark_perc m1;
    m1.get();
    m1.display();
    m1.calc_mark();

    return 0;
}