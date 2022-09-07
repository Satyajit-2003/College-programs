#include<iostream>
using namespace std;

// //Create a 'DISTANCE' class with the following members:
// Data Members
// b) feet and inches
//Member Functions
//d) To input distance through constructor
//e) To output distance
//f) To add two distance objects
//Write a main function to create objects of DISTANCE class. Input two distances (one through
// implicit call and other explicit call and output the sum.

class Distance{
    int feet, inch;
    public:
    Distance(){
        cout<<"Enter feet: ";
        cin>>feet;
        cout<<"Enter inches: ";
        cin>>inch;
    }

    void display(){
        cout<<feet<<" feet "<<inch<<" inches";
    }
    Distance sum(Distance &d2){
        d2.inch += inch;
        if (d2.inch >= 12){
            d2.feet += d2.inch/12;
            d2.inch %= 12;
        }
        d2.feet += feet;
        return d2;
    }
};

int main(){
    Distance d1;
    Distance d2;
    Distance res = d1.sum(d2);
    res.display();
    return 0;
}