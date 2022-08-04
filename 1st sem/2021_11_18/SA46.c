#include<stdio.h>

int main()
{    
    int num, i=2;

    printf("Enter a number: ");
    scanf("%d",&num);
    

    while (i<=num)
    {
        if (num%i == 0)
        {
            if (num == 2)
            {
                printf("The number entered is prime\n");
                break;
            }
            
            printf("The number entered is composite\n");
            break;
        }
        if (i == num-1)
        {       
            printf("The number entered is prime\n");
            break;
        }
        
        i++;
    }

    
    return 0;
}
