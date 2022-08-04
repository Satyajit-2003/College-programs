#include <stdio.h>

int main()
{
    int num ;
    printf("Please enter a number : ");
    scanf("%d", &num);
    printf("\n");
    if (num == 1) 
    {
        printf("The number you entered is neither prime nor composite");
        return 0;
    }

    for (int i = 1; i < num; i++)
    {
        if (num % i == 0)
        {
            printf("The number you entered is composite\n");
            break;
        }
        else if (i == num-1)
        {
            printf("The number you entered is prime\n");
        }        
        
    }
    return 0;
    
}

