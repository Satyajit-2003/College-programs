//WAP to determine power of a function using C

#include<stdio.h>

int power(int res, int po, int org){
    if (po == 0)
        return res;
    res *= org;
    return power(res, --po, org);
}

int main()
{
    int num, pow;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Enter power: ");
    scanf("%d", &pow);

    int res = power(1, pow, num);

    printf("%d to the power of %d is %d", num, pow, res);
    return 0;
}
