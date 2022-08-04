#include<stdio.h>
#include<math.h>

//WAP to read a number and delete the even location digit of that number.

int rev(int num, int new_num){
    if (num == 0)
        return new_num;
    new_num = new_num*10 + num%10;
    num /= 10;
    rev(num, new_num);
}

int length(int num, int len){
    if (num == 0)
        return len;
    num = num/10;
    length(num, len+1);
}

int dlt_even(int num, int new_num){
    if (num == 0)
        return rev(new_num, 0);
    if (length(num, 0)%2 == 0)
        num = num/10;
    new_num = new_num*10 + num%10;
    dlt_even(num/10, new_num);
}

int main(){
    int num;
    printf("enter a number: ");
    scanf("%d", &num);

    printf("The number after removing even location digits is: %d", dlt_even(num, 0));

    return 0;
}