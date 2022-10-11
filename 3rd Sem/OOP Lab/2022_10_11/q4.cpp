#include<iostream>
using namespace std;

class Student{
    protected:
    int roll;
    char *name;
    public:
    Student(int r, char *na){
        roll = r;
        name = na;
    }
};

class Sports: public virtual Student{
    protected:
    int s_grade;
    public:
    Sports(int roll, char *n, int gr): Student(roll, n){
        s_grade = gr;
    }
};

class Exam: public virtual Student{
    protected:
    int e_grade;
    public:
    Exam(int roll, char *n, int gr): Student(roll, n){
        e_grade = gr;
    }
};

class Result: public Sports, public Exam{
    public:
    Result(int roll, char *n, int gr_s, int gr_e): Exam(roll, n, gr_e), Sports(roll, n, gr_s), Student(roll, n){
        
    }
    void display(){
        cout<<"Roll: "<<roll<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Sports: "<<s_grade<<endl;
        cout<<"Exam: "<<e_grade<<endl;
        cout<<"Total: "<<s_grade + e_grade<<endl;
    }
};

int main(){
    char *name =  new char[10];
    name = "Satyajit";
    Result r1(12, name, 70, 30);
    r1.display();

    return 0;
}