#include<iostream>
using namespace std;

class Term{
    int coeff;
    int power;
    public:
    Term(){
        power = 0;
        coeff = 0;
    }
    friend void get(Term*, int);
    friend void display(Term*, int);
    friend void add(Term*, Term*, int, int);
    friend void mult(Term*, Term*, int, int);


};

void display(Term* poly, int deg){
    for (int i = deg-1; i >= 0; i--){
        if (! poly[i].coeff && i != 0)
            continue;
        if (i != 0 && i!= 1)
            cout<<poly[i].coeff<<"x^"<<poly[i].power<<" + ";
        else if(i == 1)
            cout<<poly[i].coeff<<"x"<<" + ";
        else
            cout<<poly[i].coeff;
    }
    cout<<endl;
}

void get(Term* poly, int deg){
    for (int i = 0; i< deg; i++){
        poly[i].power = i;
        cout<<"Coeff for pow "<<i<<": ";
        cin>>poly[i].coeff;
    }
}

void add(Term* pol1, Term* pol2, int deg1, int deg2){
    int res_deg;
    if (deg1 > deg2)
        res_deg = deg1;
    else
        res_deg = deg2;
    Term* result = new Term[res_deg];
    for (int i = 0; i < res_deg; i++){
        result[i].power = i;
        if (i < deg1)
            result[i].coeff += pol1[i].coeff;
        if (i < deg2){
            result[i].coeff += pol2[i].coeff;
        }
    }
    display(result, res_deg);    
}

void mult(Term* pol1, Term* pol2, int deg1, int deg2){
    int res_deg = deg1 + deg2;
    Term* result = new Term[res_deg];
    for (int i = 0; i < deg1; i++){
        for (int j = 0; j < deg2; j++){
            result[i+j].coeff += pol1[i].coeff * pol2[j].coeff;
            result[i+j].power = i+j;
        }
    }
    display(result, res_deg);
}

int main(){
    int deg1, deg2;
    cout<<"Enter degree of polynomial 1: ";
    cin>>deg1;
    cout<<"Enter degree of polynomial 2: ";
    cin>>deg2;
    deg1++;
    deg2++;
    Term pol1[deg1], pol2[deg2];
    cout<<"Enter polynomial 1: "<<endl;
    get(pol1, deg1);
    cout<<"Enter polynomial 2: "<<endl;
    get(pol2, deg2);

    display(pol1, deg1);
    display(pol2, deg2);

    cout<<"Sum: ";
    add(pol1, pol2, deg1, deg2);
    cout<<"Product: ";
    mult(pol1, pol2, deg1, deg2);

    return 0;
}
