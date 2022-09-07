#include<stdio.h>

//WAP to test whether a number num (num is entered through keyboard) 
//is a number in the Fibonacci sequence or not.

int is_fibbo(int num, int one, int two){
    int new = one + two;
    if (num == new)
        return 1;
    if (num < new)
        return 0;
    is_fibbo(num, two, new);    
}

int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    int res = is_fibbo(num, 0, 1);
    if (res)
        printf("The number is a part of fibonicci series");
    else   
        printf("The number is not a prt of fibbonicci series");
    
    return 0;
}