#include<iostream>
using namespace std;

//2.Write a program in to check whether a number is prime or not.

int is_prime(int &num);

int main(){
    int num;
    cout<<"Enter the number: ";
    cin>>num;

    int res = is_prime(num);
    if (res)
        printf("The number is prime");
    else
        printf("The number is not prime");

    return 0;
}

int is_prime(int &num){
    if (num == 2 )
        return 1;
    for (int i = 2; i < num; i++)
    {
        if (num%i == 0)
            return 0;
    }
    return 1;    
}