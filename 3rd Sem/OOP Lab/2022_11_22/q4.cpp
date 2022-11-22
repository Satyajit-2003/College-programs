#include<iostream>
using namespace std;

int main(){
    int length, res;
    cout<<"Enter length of the array: ";
    cin>>length;
    int arr[length];

    for (int i = 0 ; i < length ; i++){
        arr[i] = rand()%100;
    }

    try{

        
        cout<<"Enter index of array: ";
        cin>>res;
        if (res >= length)
            throw(res);
        cout<<res<<" : "<<arr[res];
    }
    catch(int x){
        cout<<"ARRAY OUT OF BOUND EXCEPTION";
    }

    return 0;
}