//Q7
//LCM of numbers using recursion

#include<stdio.h>

int count = 1;

int lcm(int num1, int num2){
    if (count%num1 == 0 && count%num2 == 0)
        return count;
    count++;
    lcm(num1, num2);
}


int main()
{
    int n1, n2;
    printf("Input first number: ");
    scanf("%d", &n1);
    printf("Input second number: ");
    scanf("%d", &n2);
    
    int res = lcm(n1,n2);
    printf("The LCM of %d and %d is %d", n1, n2, res);
    return 0;
}
