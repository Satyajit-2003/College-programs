#include<stdio.h>
 
int is_prime(int num1)
{    
    int i=2;   

    while (i<=num1)
    {
        if (num1%i == 0)
        {
            if (num1 == 2)
                return 1;            
            
            return 0;
        }
        if (i == num1-1)      
            return 1;

        i++;
    }
}

int main()
{    
    int num, sum = 0, r, fact;
 
    printf("Enter a number: ");
    scanf("%d",&num);

    printf("The Prime factors of %d are: \n",num);

    for (int i = 2; i < num; i++)
    {
        if (num%i == 0)
        {
            if (is_prime(i))
                printf("%d\t",i);
        }        
    } 

    printf("\n");
    
    return 0;
}

