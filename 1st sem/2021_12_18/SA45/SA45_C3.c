#include<stdio.h>

int hcf(int n1, int n2);

int main()
{  
    int n1,n2;
    printf("Enter number1: ");
    scanf("%d",&n1);
    printf("Enter number1: ");
    scanf("%d", &n2); 

    printf("The GCD of %d and %d is ",n1,n2);

    int res = hcf(n1, n2);
    printf("%d", res);
    return 0;
}

int hcf(int n1, int n2){
    int gcd = 1;
    for (int i = 2; i <= n1; i++)
    {
        if ((n1%i == 0)&&(n2%i == 0))
            gcd = i;        
    }
    return gcd;    
}