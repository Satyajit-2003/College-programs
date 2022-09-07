/* Roll No: 721MM1035
Name : Siddhartha Priyadarshi*/

#include<stdio.h>

int main(){
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    if (n == 1){
            int arr[1] = {0};
            printf("%d", arr[0]);
            return 0;
    }else if (n == 2){
            int arr[2] = {0,1};
            printf("%d\t%d", arr[0], arr[1]);
            return 0;
    }
    int last = 1, sec_last = 0, temp;
    int arr[n];
    arr[0] = 0;
    arr[1] = 1;

    for (int i = 2; i<n; i++){
        temp = last + sec_last;
        arr[i] = temp;
        sec_last = last;
        last = temp;
    }
    for (int i = 0; i<n; i++)
        printf("%d\t", arr[i]);
    
    return 0;
}