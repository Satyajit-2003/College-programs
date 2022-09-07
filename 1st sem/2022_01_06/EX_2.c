#include<stdio.h>

int main(){
    int a, b;
    int c = 5;
    int *p;

    a = 4 * (c + 5);

    p = &c;
    b = 4* (*p + 5);
    printf("a = %d\nb = %d \n", a, b);

    return 0;
}