#include<stdio.h>

int main()
{
    int fact;
    for (int i = 1; i < 6; i++)
    {  
        fact = 1;
        for (int j = 1; j <= i; j++)
            fact*= j;
        
        printf("The factorial of %d is %d\n",i,fact);
    }
    
    return 0;
}
