#include<iostream>
using namespace std;

template <class T1>
void Swap(T1 &ele1, T1 &ele2){
    ele1 = ele1 + ele2;
    ele2 = ele1 - ele2;
    ele1 = ele1 - ele2;
}

template<class T>
void sort(T* arr, int size){
    for (int i = 0; i < size; i++){
        for (int j = 0; j < size-i-1; j++){
            if (arr[j] > arr[j+1])
                Swap(arr[j], arr[j+1]);
        }
    }
}

int main(){
    int arr_int[5] = {3,6,4,23,21};
    cout<<"Before Sorting: "<<endl;
    for (int i = 0; i < 5; i++)
        cout<<arr_int[i]<<' ';
    sort(arr_int, 5);
    cout<<"\nAfter Sorting: "<<endl;
    for (int i = 0; i < 5; i++)
        cout<<arr_int[i]<<' ';


    double arr_flo[6] = {1.2, 3.5, 4.1, 8.7, 4.7, 9.6};
    cout<<"\nBefore Sorting: "<<endl;
    for (int i = 0; i < 6; i++)
        cout<<arr_flo[i]<<' ';
    sort(arr_flo, 6);
    cout<<"\nAfter Sorting: "<<endl;
    for (int i = 0; i < 6; i++)
        cout<<arr_flo[i]<<' ';
    
    char arr_char[4] = {'H', 'G', 'I', 'K'};
    cout<<"\nBefore Sorting: "<<endl;
    for (int i = 0; i < 4; i++)
        cout<<arr_char[i]<<' ';
    sort(arr_char, 4);
    cout<<"\nAfter Sorting: "<<endl;
    for (int i = 0; i < 4; i++)
        cout<<arr_char[i]<<' ';
    

    return 0;
}