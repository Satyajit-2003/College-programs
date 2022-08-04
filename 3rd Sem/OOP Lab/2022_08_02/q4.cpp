#include<iostream>
using namespace std;

// Create a 'DISTANCE' class with the following members:
// Data Members
// a) feet and inches
// Member Functions
// a) To input distance
// b) To output distance
// c) To add two distance objects
// Write a main function to create objects of DISTANCE class. Input two distances and
// output the sum.

class Distance{
    int feet, inches;
    public:
    void get_data(){
        cout<<"Enter feet: ";
        cin>>feet;
        cout<<"Enter inches: ";
        cin>>inches;
    }
    void display_data(){
        cout<<"Distance is: "<<feet<<" feet "<<inches<<" inches"<<endl;
    }
    void add(Distance d1){
        int feet_sum = d1.feet + feet;
        int inches_sum = d1.inches + inches;
        if(inches_sum >= 12){
            feet_sum += inches_sum/12;
            inches_sum = inches_sum%12;
        }
        cout<<"Sum of the distances are: "<<feet_sum<<" feet "<<inches_sum<<" inches"<<endl;
    }
};

int main(){
    Distance d1, d2;
    cout<<"Enter data for distance 1"<<endl;
    d1.get_data();
    cout<<"Enter data for distance 2"<<endl;
    d2.get_data();

    cout<<"Distance 1 is: ";
    d1.display_data();
    cout<<"Distance 2 is: ";
    d2.display_data();

    d1.add(d2);
    return 0;
}