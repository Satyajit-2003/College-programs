#include<stdio.h>

struct complex{
    int real;
    int imag;
};

void add(struct complex d1, struct complex d2);

int main(){
    struct complex d1,d2;

    printf("Enter number 1\n");
    printf("Enter real: ");
    scanf("%d", &d1.real);
    printf("Enter imaginary: ");
    scanf("%d", &d1.imag);

    printf("\nEnter number 2\n");
    printf("Enter real: ");
    scanf("%d", &d2.real);
    printf("Enter imaginary: ");
    scanf("%d", &d2.imag);

    add(d1, d2);

    return 0;
}

void add(struct complex d1, struct complex d2){
    struct complex d;

    d.real = d1.real + d2.real;
    d.imag = d1.imag + d2.imag;

    printf("Sum is %d+%di", d.real, d.imag);
}