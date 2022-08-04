#include<stdio.h>
 
int main()
{    
    int num,temp, sum = 0, r, fact;
 
    printf("Enter a number: ");
    scanf("%d",&num);
    temp = num;
 
    while (num>0)
    {
        r = num%10;
        fact = 1;
        for (int i = 1; i <= r; i++)
            fact*=i;        
        sum+=fact;
        num/=10;
    }

    if (sum == temp)     
        printf("%d is a perfect number\n",temp);
    else
        printf("%d is not a perfect number\n",temp);
    
    return 0;
}
