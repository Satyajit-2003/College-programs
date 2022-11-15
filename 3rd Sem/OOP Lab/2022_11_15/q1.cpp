#include<iostream>
using namespace std;

template<class T1>
T1 minimum(T1* arr, int len){
    T1 smallest = arr[0];
    for (int i = 0 ; i < len; i++){
        if (arr[i] < smallest)
            smallest = arr[i];
    }
    return smallest;
}

int main(){
    int arr_int[5] = {3,6,4,23,21};
    int min = minimum(arr_int, 5);
    cout<<"Minimum: "<<min<<endl;

    float arr_flo[6] = {1.2, 3.5, 4.1, 8.7, 4.7, 9.6};
    float mini = minimum(arr_flo, 6);
    cout<<"Minimum: "<<mini<<endl;

    return 0;
}