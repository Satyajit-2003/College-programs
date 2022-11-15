#include<iostream>
using namespace std;

template <class T1>
int search(T1* arr, int length, T1 key){
    for (int i = 0; i < length; i++){
        if (arr[i] == key)
            return i;
    }
    return -1;
}

int main(){
    int res;
    int arr_int[5] = {3,6,4,23,21};
    res = search(arr_int, 5, 23);
    if (res != -1)
        cout<<"Found at index: "<<res<<endl;
    else
        cout<<"Element not found"<<endl;

    double arr_flo[6] = {1.2, 3.5, 4.1, 8.7, 4.7, 9.6};
    res = search(arr_flo, 6, 3.5);
    if (res != -1)
        cout<<"Found at index: "<<res<<endl;
    else
        cout<<"Element not found"<<endl;
    
    char arr_char[4] = {'H', 'G', 'I', 'K'};
    res = search(arr_char, 4, 'L');
    if (res != -1)
        cout<<"Found at index: "<<res<<endl;
    else
        cout<<"Element not found"<<endl;
    

    return 0;
}