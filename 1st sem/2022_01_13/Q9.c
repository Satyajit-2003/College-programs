//Q9

#include<stdio.h>

int main(){
    int a, b, *x, *y, temp;

    x = &a;
    y = &b;

    printf("Enter 1st number: ");
    scanf("%d", x);
    printf("Enter 2nd number: ");
    scanf("%d", y);

    temp = *x;
    *x = *y;
    *y = temp;

    printf("Values after swapping: %d and %d", a, b);
    
    return 0;
}
