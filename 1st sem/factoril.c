#include<stdio.h>

int main()
{
    int sa_num, sa_fact;
    sa_fact = 1;
    printf("Enter a number : ");
    scanf("%d", &sa_num);
    for(int i = 2; i<=sa_num; i++)
    {
        sa_fact *= i;
    }
    printf("The factorial of number you entered is %d\n", sa_fact);
    return 0;
}
