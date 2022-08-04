#include<iostream>
using namespace std;

class Bank{
    char name[20], type[10];
    int acc_number, balance;

    public:
    void create_acc(){
        cout<<"Enter your name: ";
        cin>>name;
        cout<<"Enter type of account: ";
        cin>>type;
        balance = 0;
        cout<<"Enter account number: ";
        cin>>acc_number;
        cout<<"ACCOUNT CREATED SUCESSFULLY"<<endl;
    }
    void deposit(int amount){
        balance += amount;
        cout<<"Amount deposited sucessfully"<<endl;
        cout<<"Your balance is: "<<balance<<endl;
    }
    void withdraw(int amount){
        if(balance >= amount){
            balance -= amount;
            cout<<"Amount withdrawn sucessfully"<<endl;
            cout<<"Your balance is: "<<balance<<endl;
        }
        else{
            cout<<"Insufficient balance"<<endl;
        }
    }
    void show_balance(){
        cout<<"Account holder: "<<name<<endl;
        cout<<"Your balance is: "<<balance<<endl;
    }
};

int main(){
    Bank acc;
    int amount;
    acc.create_acc();
    cout<<"Enter amount to be deposited: ";
    cin>>amount;
    acc.deposit(amount);
    cout<<"Enter amount to be withdrawn: ";
    cin>>amount;
    acc.withdraw(amount);
    acc.show_balance();

    return 0;
}