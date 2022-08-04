#include<stdio.h>

int main()
{
    int a, b, *ap, *bp, sum, *sump;
    ap = &a; bp = &b; sump = &sum;

    printf("Enter 1st number: ");
    scanf("%d", &a);
    printf("Enter 2nd number: ");
    scanf("%d", &b);

    *sump = *ap + *bp;

    printf("Sum of %d and %d is %d", a, b, sum);
    
    return 0;
}
