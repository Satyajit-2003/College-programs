#include<stdio.h>
#include<stdlib.h>

//Write a program to print fibonacci series upto n terms.
int main(){
    int n, a=0, b=1, c;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("Fibonacci series: ");
    printf("%d %d", a, b);
    for(int i=0; i<n-2; i++){
        c = a+b;
        printf(" %d", c);
        a = b;
        b = c;
    }


}

