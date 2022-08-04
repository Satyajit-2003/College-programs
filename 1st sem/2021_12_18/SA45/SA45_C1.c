#include<stdio.h>

void hcf();

int main()
{
    hcf();
    return 0;
}

void hcf(){
    int n1,n2, gcd = 1;
    printf("Enter number1: ");
    scanf("%d",&n1);
    printf("Enter number1: ");
    scanf("%d", &n2);

    for (int i = 2; i <= n1; i++)
    {
        if ((n1%i == 0)&&(n2%i == 0))
            gcd = i;        
    }

    printf("The GCD of %d and %d is %d", n1, n2, gcd);
    
}