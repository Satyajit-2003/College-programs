#include<stdio.h>

//WAP to count number of digits of a positive integer n by using recursion.

int length(int num, int len){
    if (num == 0)
        return len;
    num = num/10;
    length(num, len+1);
}

int main(){
    int num;
    printf("Enter the integer: ");
    scanf("%d", &num);

    printf("The size is: %d", length(num, 0));

    return 0;
}