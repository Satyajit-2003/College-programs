#include<stdio.h>

//WAP to find the first digit of a number using function. 

int get_first(int num){
    int digit = num%10;
    num /= 10;
    if (num == 0)
        return digit;
    get_first(num);
}

int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("The first digit is: %d", get_first(num));

    return 0;
}