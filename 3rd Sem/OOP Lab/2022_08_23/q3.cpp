#include<iostream>
using namespace std;

int lcm(int a, int b){
    int res;
    if (a>b)
        res = a;
    else    
        res = b;
    while (1){
        if (res%a == 0 && res%b == 0)
            return res;
        else
            res ++;
    }
}

class fraction{
    int numer, denom;
    public:
    void get(){
        cout<<"Enter numerator: ";
        cin>>numer;
        cout<<"Enter denominator: ";
        cin>>denom;
    }
    void display(){
        cout<<numer<<"/"<<denom<<endl;
    }
    friend fraction add(fraction f1, fraction f2){
        fraction sum;
        sum.denom = lcm(f1.denom, f2.denom);
        sum.numer = ((sum.denom/f1.denom)*f1.numer) + ((sum.denom/f2.denom)*f2.numer);
        return sum;
    }
    friend fraction subtract(fraction &f1, fraction &f2){
        fraction diff;
        diff.denom = lcm(f1.denom, f2.denom);
        diff.numer = ((diff.denom/f1.denom)*f1.numer) - ((diff.denom/f2.denom)*f2.numer);
        return diff;
    }
    friend fraction prod(fraction *f1, fraction *f2){
        fraction res;
        res.numer = f1->numer * f2->numer;
        res.denom = f1->denom * f2->denom;
        return res;
    }   
};

int main(){
    fraction f1, f2, res;
    f1.get();
    f2.get();
    cout<<"Sum is: ";
    res = add(f1, f2);
    res.display();
    res = subtract(f1, f2);
    cout<<"Difference is: ";
    res.display();
    res = prod(&f1, &f2);
    cout<<"Product is: ";
    res.display();
}