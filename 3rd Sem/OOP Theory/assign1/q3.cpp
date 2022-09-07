#include<iostream>
using namespace std;

class Student{
    int roll, marks[6], total = 0;
    char name[20];
    public:
    void get(){
        cout<<"Enter Roll Number: ";
        cin>>roll;
        cout<<"Enter name: ";
        cin>>name;
        for (int i = 0; i < 6; i++){
            cout<<"Enter marks of "<<i+1<<" subject: ";
            cin>>marks[i];
        }
    }
    void calc_total(){
        for (int i = 0; i < 6; i++){
            total += marks[i];
        }
    }
    void display(){
        cout<<"Roll: "<<roll<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Total Marks: "<<total<<endl;        
    }    
};

int main(){
    cout<<"Class created :-)";
    return 0;
}