#include<stdio.h>

int main()
{
    int *intptr;
    char *charptr;
    float *floatptr;
    double *doubleptr;
    long int *longptr;

    printf("Size of int pointer %d\n", sizeof(intptr));
    printf("Size of int char %d\n", sizeof(charptr));
    printf("Size of int float %d\n", sizeof(floatptr));
    printf("Size of int double %d\n", sizeof(doubleptr));
    printf("Size of int long int %d", sizeof(longptr));
    
    return 0;
}
