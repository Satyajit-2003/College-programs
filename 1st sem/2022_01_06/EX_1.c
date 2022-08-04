#include<stdio.h>

int main(){
    int a; 
    float b;
    double d;
    char ch;

    a = 10; b = 6.9; d = 66.99; ch = 'A';

    printf("%d stored in %u\n", a, &a);
    printf("%f stored in %u\n", b, &b);
    printf("%f stored in %u\n", d, &d);
    printf("%c stored in %u\n", ch, &ch);
     
}