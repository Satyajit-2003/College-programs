//Q1

#include<stdio.h>

int main()
{
    int a, b, *ap, *bp;
    ap = &a; bp = &b;

    printf("Enter 1st number: ");
    scanf("%d", &a);
    printf("Enter 2nd number: ");
    scanf("%d", &b);

    if (*ap > *bp)
        printf("%d is greater", *ap);
    else
        printf("%d is greater", *bp);    
    
    return 0;
}