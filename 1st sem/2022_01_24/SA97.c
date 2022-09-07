#include<stdio.h>

union ABC{
    char a;
    int b;
};

int main(){
    union ABC ob;

    printf("Assigning values one by one and printing:\n");
    ob.a = 'A';
    printf("a : %c\n", ob.a);
    ob.b = 1088;
    printf("b : %d\n", ob.b);

    printf("Assigning and printing together:\n");
    ob.a = 'A';
    ob.b = 1088;
    printf("a : %c\n", ob.a);
    printf("b : %d\n", ob.b);
    
    return 0 ;
}