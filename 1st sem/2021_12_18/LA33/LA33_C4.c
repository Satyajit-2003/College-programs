#include<stdio.h>

int odd_or_not();

int main()
{
    int res = odd_or_not();
    if (res)
        printf("The number is odd");
    else
        printf("The number is even");
    return 0;
}


int odd_or_not(){
    int n;
    printf("Enter num1: ");
    scanf("%d",&n);
    if (n%2 == 1)
        return 1;
    return 0;
}
