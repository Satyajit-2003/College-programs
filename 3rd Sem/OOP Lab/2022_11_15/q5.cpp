#include<iostream>
using namespace std;

template<class T>
void Swap(T &a, T &b){
    a = a + b;
    b = a - b ;
    a = a - b;
}

template <class T, int len>
void sort(T* arr){
    for (int i = 0; i < len; i++){
        for (int j = 0; j < len - i - 1; j++){
            if (arr[j] > arr[j+1])
                Swap(arr[j], arr[j+1]);
        }
    }
}

int main(){
    int arr_int[5] = {3,6,4,23,21};
    sort<int, 5>(arr_int);
    cout<<"\nAfter Sorting: "<<endl;
    for (int i = 0; i < 5; i++)
        cout<<arr_int[i]<<' ';

    double arr_flo[6] = {1.2, 3.5, 4.1, 8.7, 4.7, 9.6};
    sort<double, 6>(arr_flo);
    cout<<"\nAfter Sorting: "<<endl;
    for (int i = 0; i < 6; i++)
        cout<<arr_flo[i]<<' ';
    
    char arr_char[4] = {'H', 'G', 'I', 'K'};
    sort<char, 4>(arr_char);
    cout<<"\nAfter Sorting: "<<endl;
    for (int i = 0; i < 4; i++)
        cout<<arr_char[i]<<' ';    

    return 0;
}