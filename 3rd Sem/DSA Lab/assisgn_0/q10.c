#include<stdio.h>

//WAP to find the factorial of a number n by using a suitable user defined function (say fact) for it.

int fact(int num);

int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);

    int res = fact(n);
    printf("The factorial is %d", res);
    return 0;
}

int fact(int num){
    int f = 1;
    for (int i = 2; i < num+1; i++)
        f *= i;
    return f;    
}