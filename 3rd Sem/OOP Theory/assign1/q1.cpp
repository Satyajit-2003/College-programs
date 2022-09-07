#include<iostream>
using namespace std;

//WAP using class “Employee” having data members: name, employee No, dept and salary. 
//Demonstrate the use of inline functions .

class Employee{
    int empl_num, salary;
    char name[20], dept[5];
    public:
    void get(){
        cout<<"Employee Number: ";
        cin>>empl_num;
        cout<<"Name: ";
        cin>>name;
        cout<<"Salary: ";
        cin>>salary;
    }
    inline int get_salary(){ return salary; }
};

int main(){
    Employee e1;
    e1.get();
    printf("%d", e1.get_salary());
}