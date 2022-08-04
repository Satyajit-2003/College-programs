//Q5
//Prime or composite

#include<stdio.h>

void prime(int num, int start){
    if (num == start)
    {
        printf("The number is prime");
        return;
    }    
    if (num%start == 0)
    {
        printf("The number is composite");
        return;
    }
    prime(num, ++start);
    
}


int main()
{
    int n;
    printf("Input a number: ");
    scanf("%d", &n);
    prime(n, 2);
    return 0;
}
