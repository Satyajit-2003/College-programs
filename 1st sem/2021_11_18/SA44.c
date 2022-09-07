#include<stdio.h>

int main()
{    
    int num,temp, sum = 0, r;

    printf("Enter a number: ");
    scanf("%d",&num);
    temp = num;

    while (num>0)
    {
        r = num%10;
        sum+=r;
        num/=10;
    }

    printf("Sum of the digits of %d is %d\n",temp,sum);
    
    return 0;
}
