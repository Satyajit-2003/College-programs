#include<stdio.h>

int main()
{
    int num, *numptr;
    numptr = &num;
    
    printf("Enter num: ");
    scanf("%d", &num);

    printf("The value of num is %d", *numptr);
    return 0;
}
