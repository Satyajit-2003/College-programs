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

int main(){
    test t1;
    t1.get();
    t1.display();
}