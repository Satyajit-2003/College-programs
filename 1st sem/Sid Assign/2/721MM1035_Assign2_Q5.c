/* Roll No: 721MM1035
Name : Siddhartha Priyadarshi*/

#include<stdio.h>

int main(){
    int int_size, float_size, char_size, dou_size;

    int_size = sizeof(int);
    float_size = sizeof(float);
    char_size = sizeof(char);
    dou_size = sizeof(double);

    printf("Size of Int: %d\n", int_size);
    printf("Size of float: %d\n", float_size);
    printf("Size of char: %d\n", char_size);
    printf("Size of double: %d\n", dou_size);   

    return 0;
}
